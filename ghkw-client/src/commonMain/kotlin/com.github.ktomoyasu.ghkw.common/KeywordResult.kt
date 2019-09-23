package com.github.ktomoyasu.ghkw.common

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

data class KeywordResult(val keyword: String, val totalCount: Int)

@Serializable
internal data class SearchResult(@SerialName("total_count") val totalCount: Int, @SerialName("incomplete_results") val incomplete: Boolean)
