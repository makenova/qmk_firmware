#include QMK_KEYBOARD_H

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_bspc[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_numdel[] = {KC_0, KC_9, COMBO_END};
const uint16_t PROGMEM combo_tilde[] = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_MINS, KC_EQL, COMBO_END};
const uint16_t PROGMEM combo_ent[] = {KC_D, KC_F, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_bspc,KC_BSPC), // 1
  COMBO(combo_numdel,KC_DEL), // 2
  COMBO(combo_tab,KC_TAB), // 3
  COMBO(combo_esc,KC_ESC), // 4
  COMBO(combo_del,KC_DEL), // 5
  COMBO(combo_ent,KC_ENT), // 6
  COMBO(combo_tilde,KC_GRV), // 7
};
#endif

// ctrl
#define CTRL_A LCTL_T(KC_A)
#define CTRL_SCLN RCTL_T(KC_SCLN)
// alt
#define ALT_S LALT_T(KC_S)
#define ALT_L RALT_T(KC_L)
// shift
#define SFT_Z LSFT_T(KC_Z)
#define SFT_SLSH RSFT_T(KC_SLSH)
// layers
#define OS_SFT OSM(MOD_RSFT)
#define OS_3 OSL(3)
#define OS_4 OSL(4)
#define LT1_SPC LT(1,KC_SPC)
#define LT2_ESC LT(2,KC_ESC)
// #define LT3_GRV LT(3,KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_3(
    KC_Q,    KC_W,   KC_E,     KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    CTRL_A,  ALT_S,  KC_D,     KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    ALT_L,   CTRL_SCLN,
    SFT_Z,   KC_X,   KC_C,     KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  SFT_SLSH,
                     KC_LALT,  KC_LGUI, LT2_ESC,        LT1_SPC, OS_SFT,  OS_3
  ),

  [1] = LAYOUT_split_3x5_3(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_QUOT,
    KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS,      KC_TRNS, KC_BSLS, KC_MINS, KC_EQL,  KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [2] = LAYOUT_split_3x5_3(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_DQUO,
    KC_LCTL, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS,      KC_TRNS, KC_PIPE, KC_UNDS, KC_PLUS,  KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT_split_3x5_3(
    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,            KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
    KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS,        KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS,
    RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_F14, KC_F15, KC_VOLD, KC_VOLU,  OS_4,
             RGB_TOG, RGB_MODE_FORWARD, KC_SLEP,      KC_TRNS,  KC_TRNS, KC_TRNS
  ),

  [4] = LAYOUT_split_3x5_3( \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,\
    KC_A,  KC_S,  KC_D,  KC_F,  KC_NO,                 KC_NO,  KC_J,  KC_K,  KC_L,  KC_SCLN,\
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,\
                  KC_NO,   KC_NO,  KC_B,              KC_SPC,   KC_NO, KC_NO \
  )
};