// config_audio.h
#pragma once

#if defined(AUDIO_ENABLE)

#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define STARTUP_SONG SONG(MEGALOVANIA_SHORT)

#endif