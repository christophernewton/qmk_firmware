#include QMK_KEYBOARD_H

enum layer_names {
    _NP,
    _BL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_NP] = LAYOUT_ortho_6x4(
        LSFT(LCTL(LWIN(KC_4))), LSFT(LALT(LWIN(KC_F12))), LSFT(LALT(LWIN(KC_F11))), MO(_BL),
        KC_MEDIA_PLAY_PAUSE, KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   KC_DOT,  KC_PDOT, KC_PENT
    ),
    [_BL] = LAYOUT_ortho_6x4(
        LCTL(LWIN(KC_Q)), KC_VOLD, KC_VOLU, _______,
        RESET, _______, _______, _______,
        _______, BL_ON,   _______, BL_INC,
        _______, BL_TOGG, _______, BL_INC,
        _______, BL_OFF,  _______, BL_DEC,
        BL_BRTG, _______, _______, BL_DEC
    )
};
