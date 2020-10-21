#pragma once

#define MASTER_LEFT
// #define MASTER_RIGHT

#define USE_SERIAL_PD2

// #define OLED_FONT_H "keyboards/crkbd/keymaps/makenova/glcdfont.c"

// #define TAPPING_FORCE_HOLD 
#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT

#ifdef COMBO_ENABLE
#    define COMBO_COUNT 4
#    define COMBO_TERM 50
#endif

#define ONESHOT_TAP_TOGGLE 2  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 2000  /* Time (in ms) before the one shot key is released */