package com.github.ktomoyasu.ghkw.common

import io.ktor.client.HttpClient
import io.ktor.client.features.logging.DEFAULT
import io.ktor.client.features.logging.LogLevel
import io.ktor.client.features.logging.Logger
import io.ktor.client.features.logging.Logging
import io.ktor.client.request.accept
import io.ktor.client.request.get
import io.ktor.client.request.parameter
import io.ktor.http.ContentType
import io.ktor.http.URLProtocol
import kotlinx.coroutines.*
import kotlinx.serialization.UnstableDefault
import kotlinx.serialization.json.Json

internal expect val coroutineDispatcher: CoroutineDispatcher

@UnstableDefault
class ApiClient {
    companion object {
        private const val hostName = "api.github.com"
    }
    private var client = HttpClient()

    suspend fun search(words: List<String>, token:String): Response {
        try {
            val resultList = words.map { word ->
                val searchResult = request(word, token)
                if (searchResult.incomplete) {
                    return Response.Error(Exception("query time out."))
                }
                KeywordResult(
                    keyword = word,
                    totalCount = searchResult.totalCount
                )
            }
            val sorted = resultList.sortedByDescending { it.totalCount }
            return (Response.Success(sorted))
        } catch (e: Exception) {
            return (Response.Error(e))
        }
    }

    fun search(words: List<String>, token: String, callback: (List<KeywordResult>) -> Unit, onError: (Exception) -> Unit) {
        GlobalScope.launch(coroutineDispatcher) {
            when (val response = search(words, token)) {
                is Response.Success -> callback(response.data)
                is Response.Error -> onError(response.e)
            }
        }
    }

    fun searchAsync(words: List<String>, token: String) = GlobalScope.async(coroutineDispatcher) {
        search(words, token)
    }

    private suspend fun request(word: String, token: String): SearchResult {
        val res = client.get<String> {
            url {
                protocol = URLProtocol.HTTPS
                host = hostName
                path(listOf("search", "code"))
                accept(ContentType.Application.Json)
                parameter(key = "q", value = word)
                parameter(key = "access_token", value = token)
            }
        }
        return Json.nonstrict.parse(SearchResult.serializer(), res)
    }

    fun setLoglevel(ghkwLogLevel: GhkwLogLevel) {
        when(ghkwLogLevel) {
            GhkwLogLevel.DEBUG -> {
                client.config {
                    install(Logging) {
                        logger = Logger.DEFAULT
                        level = LogLevel.ALL
                    }
                }
            }
            GhkwLogLevel.NONE -> {
                client.config {
                    install(Logging) {
                        level = LogLevel.NONE
                    }
                }
            }
        }
    }

    enum class GhkwLogLevel {
        DEBUG, NONE
    }
}

sealed class Response {
    data class Success(val data: List<KeywordResult>): Response()
    data class Error(val e: Exception): Response()
}
