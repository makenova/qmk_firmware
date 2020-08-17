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
  TD_A_TAB = 1,
  TD_Q_ESC = 2,
  TD_N_SPC = 3,
  TD_P_BSPC = 4
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SEMI_QUOTE]  = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_QUOT),
  [TD_A_TAB]  = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_TAB),
  [TD_Q_ESC]  = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
  [TD_N_SPC]  = ACTION_TAP_DANCE_DOUBLE(KC_N, KC_SPC),
  [TD_P_BSPC]  = ACTION_TAP_DANCE_DOUBLE(KC_P, KC_BSPC)
};

// combos
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM fj_combo[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM gh_combo[] = {KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM dk_combo[] = {KC_D, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  COMBO(qw_combo, KC_ESC), // 1
  COMBO(op_combo, KC_BSPC), // 2
  COMBO(as_combo, KC_TAB), // 3
  COMBO(fj_combo, KC_SPC), // 4
  COMBO(gh_combo, KC_ENT), // 5
  COMBO(dk_combo, KC_BSPC), // 6
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_s_30(
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(TD_SEMI_QUOTE),
    MT(MOD_LSFT, KC_Z), MT(MOD_LCTL, KC_X), MT(MOD_LALT, KC_C), MT(MOD_LGUI, KC_V), LT(1,KC_B), KC_N, MT(MOD_RGUI, KC_M), MT(MOD_RALT, KC_COMM), MT(MOD_RCTL, KC_DOT), KC_SLSH
    ),
    LAYOUT_s_30(
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_QUOT,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLSH
    ),
    LAYOUT_s_30(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    LAYOUT_s_30(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
