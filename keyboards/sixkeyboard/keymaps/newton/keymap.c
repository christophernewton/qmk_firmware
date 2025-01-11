
#include QMK_KEYBOARD_H
#include "matrix.h"

/* enum unicode_name {
  DISAP,
  TJOY,
  NEUTRAL,
};

const uint32_t PROGMEM unicode_map[] = {
  [TJOY] = 0x1F602,
  [NEUTRAL] = 0x1F610,
  [DISAP] = 0x1F61E,
}; 
// example X(TJOY)
*/
/*
 layer 0
`----------+--------+---------'
|screenshot|maximise|clipboard|
+----------+--------+---------+
|lock      |mute    |layer    |
`----------+--------+---------'
 layer 2
`----------+----------+----------'
|layerreset|layerreset|layerreset|
+----------+----------+----------+
|vol down  |vol up    |layer     |
`----------+----------+----------'
*/

enum custom_keycodes {
    EMAIL = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case EMAIL:
        if (record->event.pressed) {
            // when keycode EMAIL is pressed
            SEND_STRING("chris.newton@revium.com.au");
        } else {
            // when keycode EMAIL is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_2x3(
    LSFT(LCTL(LWIN(KC_4))), LCTL(LALT(KC_ENTER)), LCTL(LALT(LWIN(KC_P))), \
    LCTL(LWIN(KC_Q)), KC_MUTE, EMAIL \
    /*TG(1)*/
  ),
  [1] = LAYOUT_ortho_2x3(
    KC_MEDIA_PLAY_PAUSE, KC_MEDIA_REWIND, KC_MEDIA_FAST_FORWARD, \
    KC_VOLD, KC_VOLU, KC_TRNS  \
  )
};

void matrix_scan_user(void) {
  // jump to bootloaer when all keys are pressed
  if (matrix_get_row(0) == 0b111 && matrix_get_row(1) == 0b111) {
    clear_keyboard();
    bootloader_jump();
  }
};
