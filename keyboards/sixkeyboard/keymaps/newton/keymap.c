
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
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    LSFT(LCTL(LWIN(KC_4))), LSFT(LALT(LWIN(KC_F12))), LSFT(LALT(LWIN(KC_F11))), \
    LCTL(LWIN(KC_Q)), KC__MUTE, LSFT(LCTL(KC_M)) \
    /*TG(1)*/
  ),
  [1] = LAYOUT(
    KC_MEDIA_PLAY_PAUSE, KC_MEDIA_REWIND, KC_MEDIA_FAST_FORWARD, \
    KC__VOLDOWN, KC__VOLUP, KC_TRNS  \
  )
};

void matrix_scan_user(void) {
  // jump to bootloaer when all keys are pressed
  if (matrix_get_row(0) == 0b111 && matrix_get_row(1) == 0b111) {
    clear_keyboard();
    bootloader_jump();
  }
};
