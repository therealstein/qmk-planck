#pragma once

#ifdef AUDIO_ENABLE
    // #define STARTUP_SONG SONG(PLANCK_SOUND)
    #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif




#define MOUSEKEY_DELAY 500
#define MOUSEKEY_INTERVAL 80
#define MOUSEKEY_MOVE_DELTA 5
#define MOUSEKEY_MAX_SPEED 10
#define MOUSEKEY_TIME_TO_MAX 10
#define MOUSEKEY_WHEEL_DELAY 300
#define MOUSEKEY_WHEEL_INTERVAL 200
#define MOUSEKEY_WHEEL_MAX_SPEED 30
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40

#define ENCODER_RESOLUTION 4

#define UNICODE_SELECTED_MODES UC_LNX
