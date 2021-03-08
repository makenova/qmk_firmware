/* Copyright 2020 makenova
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum {
  TD_SEMI_QUOTE = 0,
  TD_DOT_ENTER = 1
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SEMI_QUOTE]  = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_QUOT),
  [TD_DOT_ENTER]  = ACTION_TAP_DANCE_DOUBLE(KC_PDOT, KC_PENT)
};

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
#define OS_SFT OSM(MOD_RSFT)
#define OS_3 OSL(3)
#define OS_4 OSL(4)
#define LT1_SPC LT(1,KC_SPC)
#define LT2_ESC LT(2,KC_ESC)

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_bspc[] = {GUI_J, ALT_K, COMBO_END};
const uint16_t PROGMEM combo_ent[] = {GUI_F, ALT_D, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_bspc,KC_BSPC), // 1
  COMBO(combo_ent,KC_ENT), // 2
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
    KC_P7, KC_P8, KC_P9, LCTL_T(KC_GRV), KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_BSPC,
    KC_P4, KC_P5, KC_P6, LCTL_T(KC_TAB), SFT_A, CTRL_S, ALT_D, GUI_F, KC_G, KC_H, GUI_J, ALT_K, CTRL_L, SFT_SCLN, LT(3,KC_ENT),
    KC_P1, KC_P2, KC_P3, KC_UP, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    TD(TD_DOT_ENTER), LT(1, KC_P0), KC_LEFT, KC_DOWN, KC_RGHT, KC_LALT, KC_LGUI, LT(2,KC_ESC), LT(1,KC_SPC), KC_RGUI, KC_RALT, KC_RCTRL
    ),
    LAYOUT(
    KC_PSLS, KC_PAST, KC_PMNS, KC_TRNS, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,  KC_EQL,
    KC_TRNS, KC_TRNS, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_QUOT, KC_BSLS,
    KC_TRNS, KC_TRNS, KC_PENT, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, KC_MINS, KC_EQL, KC_BSLS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    LAYOUT(
    KC_PSLS, KC_PAST, KC_PMNS, KC_TRNS, KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS, KC_EQL,
    KC_TRNS, KC_TRNS, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_DQUO, KC_BSLS,
    KC_TRNS, KC_TRNS, KC_PENT, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PIPE, KC_UNDS, KC_PLUS, KC_BSLS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    LAYOUT(
    KC_POWER, KC_TRNS, KC_TRNS, KC_POWER, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F14, KC_F15, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS,
    RESET, KC_TRNS, KC_F14, KC_VOLD, KC_F15, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
