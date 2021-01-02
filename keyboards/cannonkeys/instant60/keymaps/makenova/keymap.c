#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// ctrl
#define CTRL_S LCTL_T(KC_S)
#define CTRL_L RCTL_T(KC_L)
// alt
#define ALT_D LALT_T(KC_D)
#define ALT_K RALT_T(KC_K)
//gui
#define GUI_F LGUI_T(KC_F)
#define GUI_J RGUI_T(KC_J)
// shift
#define SFT_A LSFT_T(KC_A)
#define SFT_SCLN RSFT_T(KC_SCLN)
// layers
#define OS_SFT OSM(MOD_LSFT)
#define OS_GUI OSM(MOD_LGUI)
#define OS_1 OSL(1)
#define LT2_SPC LT(2,KC_SPC)
#define LT3_ESC LT(3,KC_ESC)

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_ent[] = {ALT_D, GUI_F, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {GUI_J, ALT_K, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_M, KC_COMM, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_esc,KC_ESC),   // 1
  COMBO(combo_ent,KC_ENT),   // 2
  COMBO(combo_tab,KC_TAB),   // 3
  COMBO(combo_bspc,KC_BSPC), // 4
  COMBO(combo_del,KC_DEL),   // 5
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_tsangan_hhkb(
        KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, LT3_ESC,
        KC_LCTL, KC_LALT, KC_LGUI, LT2_SPC, KC_RGUI, KC_RALT, KC_RCTL
    ),
    [1] = LAYOUT_60_tsangan_hhkb(
        KC_ESC,  KC_1,  KC_2,   KC_3,  KC_4,  KC_5, KC_6, KC_7,  KC_8,    KC_9,   KC_0,     KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q,  KC_W,   KC_E,  KC_R,  KC_T, KC_Y, KC_U,  KC_I,    KC_O,   KC_P,     KC_LBRC, KC_RBRC, KC_BSPC,
        MO(3), SFT_A, CTRL_S, ALT_D, GUI_F, KC_G, KC_H, GUI_J, ALT_K,   CTRL_L, SFT_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,  KC_X,   KC_C,  KC_V,  KC_B, KC_N, KC_M,  KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT, LT3_ESC,
        KC_LCTL, KC_LALT, KC_LGUI, LT2_SPC, KC_RGUI, KC_RALT, KC_RCTL
    ),
    [2] = LAYOUT_60_tsangan_hhkb(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F14, KC_F15,
        KC_CAPS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS, KC_TRNS, KC_DEL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, KC_MINS, KC_EQL,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT_60_tsangan_hhkb(
        RGB_TOG, RGB_MOD, RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        BL_BRTG, BL_INC,  BL_DEC,   KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,
        RESET, KC_TRNS, KC_TRNS, KC_TRNS, DF(0), DF(1), DF(4)
    ),
    [4] = LAYOUT_60_tsangan_hhkb(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL, KC_A, KC_S, KC_D,KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M,KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, DF(0),
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, KC_RALT, KC_RCTL
    )
};
