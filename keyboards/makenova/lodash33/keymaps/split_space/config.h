#pragma once

#ifdef COMBO_ENABLE
#    define COMBO_COUNT 6
#    define COMBO_TERM 50
#endif

#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT

#define ONESHOT_TAP_TOGGLE 2  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 2000  /* Time (in ms) before the one shot key is released */