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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

//  ______
// |     ||
// |  0  ||
// |_____||____________________
// |     ||     ||     ||     ||
// |  1  ||  2  ||  3  ||     ||
// |_____||_____||_____|| Ent ||
// |     ||     ||     ||     ||
// |  4  ||  5  ||  6  ||     ||
// |_____||_____||_____||_____||

// ____________________________
// |     ||     ||     ||     ||
// |  3  ||  4  ||  5  ||  6  ||
// |_____||_____||_____||_____||
// |     ||     ||     ||     ||
// |  2  ||  0  ||  1  || Ent ||
// |_____||_____||_____||_____||

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_P3, KC_P4, KC_P5, KC_P6,
        KC_P2, KC_P0, KC_P1, KC_ENT
    ),
    [1] = LAYOUT(
        KC_3, KC_4, KC_5, KC_6,
        KC_7, KC_8, KC_9, KC_0
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
