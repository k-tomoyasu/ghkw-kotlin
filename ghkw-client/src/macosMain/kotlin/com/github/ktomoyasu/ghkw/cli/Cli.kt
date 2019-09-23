package com.github.ktomoyasu.ghkw.cli

import com.github.ktomoyasu.ghkw.cli.Const.ENV_TOKEN
import com.github.ktomoyasu.ghkw.common.ApiClient
import com.github.ktomoyasu.ghkw.common.Response.Success
import com.github.ktomoyasu.ghkw.common.Response.Error
import kotlinx.cinterop.toKString
import kotlinx.coroutines.runBlocking
import kotlinx.serialization.UnstableDefault
import platform.posix.*
import kotlin.system.exitProcess

object Const {
    const val ENV_TOKEN = "GITHUB_ACCESS_TOKEN"
}

@UnstableDefault
fun main(args: Array<String>) =
    runBlocking {
        if (args.isEmpty()) {
            fprintf(stderr, "Please put words at least one.")
            exitProcess(1)
        }

        val token = getenv(ENV_TOKEN)?.toKString() ?: ""
        if (token.isEmpty()) {
            fprintf(stderr,"Please set Environment Variable $ENV_TOKEN.")
            exitProcess(1)
        }

        when (val response = ApiClient().search(args.toList(), token)) {
            is Success -> {
                response.data.forEach {
                    println("${it.keyword}\t${it.totalCount}")
                }
            }
            is Error -> {
                fprintf(stderr, response.e.message)
                exitProcess(1)
            }
        }
    }

