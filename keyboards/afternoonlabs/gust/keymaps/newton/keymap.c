/* Copyright 2021 eithanshavit
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

enum layer_names {
    _MAIN,
};

enum custom_keycodes {
    SS_1 = SAFE_RANGE,
    SS_2,
    SS_3,
    SS_4,
    SS_5,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case SS_1:
        if (record->event.pressed) {
            SEND_STRING("GG");
        } else {}
        break;
    case SS_2:
        if (record->event.pressed) {
            SEND_STRING("GGWP");
        } else {}
        break;
    case SS_3:
        if (record->event.pressed) {
            SEND_STRING("MAD CUZ BAD");
        } else {}
        break;
    case SS_4:
        if (record->event.pressed) {
            SEND_STRING("Can the tanks PTFO");
        } else {}
        break;
    case SS_5:
        if (record->event.pressed) {
            SEND_STRING("2 EZ");
        } else {}
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
  //┌─────────┬─────────┬─────────┐
    SS_1, SS_2, SS_3,
    SS_4, SS_5, SS_5,
  //├─────────┼─────────┼─────────┤
  
  //├─────────┼─────────┼─────────┤
     KC_7,     KC_8,     KC_9
  //└─────────┴─────────┴─────────┘
  )

};
