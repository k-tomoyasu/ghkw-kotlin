package com.github.ktomoyasu.ghkw.common

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers

internal actual val coroutineDispatcher: CoroutineDispatcher = Dispatchers.Default
