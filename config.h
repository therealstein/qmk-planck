#pragma once

#ifdef AUDIO_ENABLE
    // #define STARTUP_SONG SONG(PLANCK_SOUND)
    #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif


#define ENCODER_RESOLUTION 4
#define UNICODE_CYCLE_PERSIST false
#define UNICODE_SELECTED_MODES UC_LNX, UC_WINC

