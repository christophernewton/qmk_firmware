#include QMK_KEYBOARD_H

enum layer_names {
    _NP,
    _BL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_NP] = LAYOUT_ortho_6x4(
        LSFT(LCTL(LWIN(KC_4))), LCTL(LALT(KC_ENTER)), LCTL(LALT(LWIN(KC_P))), MO(_BL),
        KC_MEDIA_PLAY_PAUSE, KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   KC_DOT,  KC_PDOT, KC_PENT
    ),
    [_BL] = LAYOUT_ortho_6x4(
        LCTL(LWIN(KC_Q)), KC_VOLD, KC_VOLU, _______,
        QK_RBT, _______, _______, _______,
        _______, BL_ON,   _______, _______,
        _______, BL_TOGG, _______, _______,
        _______, BL_OFF,  _______, _______,
        BL_BRTG, _______, _______, _______
    )
};
