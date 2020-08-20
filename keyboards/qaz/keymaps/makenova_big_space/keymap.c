#include QMK_KEYBOARD_H

enum {
  TD_SEMI_QUOTE = 0,
  // TD_A_TAB = 1,
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SEMI_QUOTE]  = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_QUOT),
  // [TD_A_TAB]  = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_TAB),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT(
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    MT(MOD_LCTL, KC_A), KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(TD_SEMI_QUOTE),
    MT(MOD_LSFT, KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, MT(MOD_LSFT, KC_DOT),
    KC_LALT, KC_LGUI,        LT(1,KC_SPACE),       KC_RCTL, LT(2,KC_SLSH)
  ),
  LAYOUT(
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_QUOT,
    KC_TRNS, KC_LBRC, KC_RBRC, KC_UNDS, KC_RPRN, KC_RBRC, KC_BSLS, KC_MINS, KC_EQL,
    KC_TRNS, KC_TRNS,      KC_TRNS,        KC_TRNS, KC_TRNS
  ),
  LAYOUT(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
    KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_MINS, KC_EQL,
    KC_LCBR, KC_LBRC, KC_LPRN, KC_UNDS, KC_RPRN, KC_RBRC, KC_RCBR, KC_SCLN, KC_BSLS,
    RESET, KC_TRNS,      KC_POWER,        KC_TRNS, KC_TRNS
  )
};

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_bspc[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_numbak[] = {KC_0, KC_9, COMBO_END};
const uint16_t PROGMEM combo_tilde[] = {KC_1, KC_2, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_MINS, KC_EQL, COMBO_END};
const uint16_t PROGMEM combo_ent[] = {KC_G, KC_H, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_bspc,KC_BSPC), // 1
  COMBO(combo_numbak,KC_BSPC), // 2
  COMBO(combo_tab,KC_TAB), // 3
  COMBO(combo_esc,KC_ESC), // 4
  COMBO(combo_del,KC_DEL), // 5
  COMBO(combo_ent,KC_ENT), // 6
  COMBO(combo_tilde,KC_GRV), // 7
};
#endif