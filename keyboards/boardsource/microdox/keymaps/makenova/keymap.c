#include QMK_KEYBOARD_H

// ctrl
#define CTRL_S LCTL_T(KC_S)
#define CTRL_L RCTL_T(KC_L)
#define C_L C(KC_LEFT)
#define C_D C(KC_DOWN)
#define C_U C(KC_UP)
#define C_R C(KC_RIGHT)
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
#define OS_3 OSL(3)
#define OS_4 OSL(4)
#define OS_5 OSL(5)
#define LT1_SPC LT(1,KC_SPC)
#define LT2_ESC LT(2,KC_ESC)

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_bspc[] = {GUI_J, ALT_K, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_ent[] = {GUI_F, ALT_D, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_ctrlR[] = {GUI_F, KC_DLR, COMBO_END};
const uint16_t PROGMEM combo_ctrlV[] = {GUI_F, KC_V, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_bspc,KC_BSPC), // 1
  COMBO(combo_del,KC_DEL), // 2
  COMBO(combo_ent,KC_ENT), // 3
  COMBO(combo_tab,KC_TAB), // 4
  COMBO(combo_ctrlR,LGUI(KC_R)), // 5
  COMBO(combo_ctrlV,LGUI(KC_V)), // 6
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_3(
    KC_Q,   KC_W,    KC_E,     KC_R,    KC_T,           KC_Y,    KC_U,   KC_I,    KC_O,   KC_P,
    SFT_A,  CTRL_S,  ALT_D,    GUI_F,   KC_G,           KC_H,    GUI_J,  ALT_K,   CTRL_L, SFT_SCLN,
    KC_Z,   KC_X,    KC_C,     KC_V,    KC_B,           KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH,
                     OS_SFT,   OS_4,    LT2_ESC,        LT1_SPC, OS_3,   KC_GRV
  ),

  [1] = LAYOUT_split_3x5_3(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,     KC_0,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_QUOT,
    KC_GRV,  KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS,      KC_TRNS, KC_BSLS, KC_MINS, KC_EQL,   KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [2] = LAYOUT_split_3x5_3(
    KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_DQUO,
    KC_TILDE, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS,      KC_TRNS, KC_PIPE, KC_UNDS, KC_PLUS, KC_TRNS,
                       KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT_split_3x5_3(
    KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,          KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,
    KC_F11, KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS,        KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_TRNS,
    RESET,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_F14,  KC_F15,  KC_VOLD, KC_VOLU,  KC_TRNS,
            RGB_TOG, RGB_MODE_FORWARD, KC_SLEP,        KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [4] = LAYOUT_split_3x5_3(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS,
    C_L,     C_D,     C_U,     C_R,     KC_TRNS,       KC_WH_U, KC_WH_D, KC_TRNS, KC_TRNS, KC_TRNS,
                      KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS
  ),
};