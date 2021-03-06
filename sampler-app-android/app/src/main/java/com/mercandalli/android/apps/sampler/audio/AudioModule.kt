package com.mercandalli.android.apps.sampler.audio

import android.content.Context

class AudioModule(
    private val context: Context
) {

    @Suppress("ConstantConditionIf")
    fun createAudioManager(): AudioManager {
        return if (NativeAudioManager) {
            NativeAudioManager(context)
        } else {
            SoundPoolAudioManager(context.assets)
        }
    }

    companion object {
        private const val NativeAudioManager = false
    }
}
