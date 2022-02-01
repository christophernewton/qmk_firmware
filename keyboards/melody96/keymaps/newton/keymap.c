#include QMK_KEYBOARD_H

/*emoji*/
enum unicode_name {
  GRIN, // grinning face 😊
  TJOY, // tears of joy 😂
  NEUT,
  GRIM,
  SMILE, // grining face with smiling eyes 😁
  HEART, // heart ❤
  EYERT, // smiling face with heart shaped eyes 😍
  CRY, // crying face 😭
  SMEYE, // smiling face with smiling eyes 😊
  UNAMU, // unamused 😒
  KISS, // kiss 😘
  HART2, // two hearts 💕
  WEARY, // weary 😩
  OKHND, // ok hand sign 👌
  PENSV, // pensive 😔
  SMIRK, // smirk 😏
  RECYC, // recycle ♻
  WINK, // wink 😉
  THMUP, // thumb up 👍
  THMDN, // thumb down 👎
  PRAY, // pray 🙏
  PHEW, // relieved 😌
  MUSIC, // musical notes
  FLUSH, // flushed 😳
  CELEB, // celebration 🙌
  CRY2, // crying face 😢
  COOL, // smile with sunglasses 😎
  NOEVS, // see no evil
  NOEVH, // hear no evil
  NOEVK, // speak no evil
  POO, // pile of poo
  VIC, // victory hand
  BHART, // broken heart
  SLEEP, // sleeping face
  SMIL2, // smiling face with open mouth & sweat
  HUNRD, // 100
  CONFU, // confused
  TONGU, // face with tongue & winking eye
  DISAP, // disappointed
  YUMMY, // face savoring delicious food
  CLAP, // hand clapping
  FEAR, // face screaming in fear
  HORNS, // smiling face with horns
  HALO, // smiling face with halo
  BYE, // waving hand
  SUN, // sun
  MOON, // moon
  SKULL, // skull

  // greek letters
  UALPH,
  UBETA,
  UGAMM,
  UDELT,
  UEPSI,
  UZETA,
  UETA,
  UTHET,
  UIOTA,
  UKAPP,
  ULAMB,
  UMU,
  UNU,
  UXI,
  UOMIC,
  UPI,
  URHO,
  USIGM,
  UTAU,
  UUPSI,
  UPHI,
  UCHI,
  UPSI,
  UOMEG,

  LALPH,
  LBETA,
  LGAMM,
  LDELT,
  LEPSI,
  LZETA,
  LETA,
  LTHET,
  LIOTA,
  LKAPP,
  LLAMB,
  LMU,
  LNU,
  LXI,
  LOMIC,
  LPI,
  LRHO,
  LSIGM,
  LTAU,
  LUPSI,
  LPHI,
  LCHI,
  LPSI,
  LOMEG,

  FSIGM,

  LTEQ,
  GTEQ,
  NOTEQ,
  PLMIN,
};
const uint32_t PROGMEM unicode_map[] = {
  [GRIN] = 0x1F600,
  [TJOY] = 0x1F602,
  [NEUT] = 0x1F610,
  [GRIM] = 0x1F62C,
  [SMILE] = 0x1F601,
  [HEART] = 0x2764,
  [EYERT] = 0x1f60d,
  [CRY] = 0x1f62d,
  [SMEYE] = 0x1F60A,
  [UNAMU] = 0x1F612,
  [KISS] = 0x1F618,
  [HART2] = 0x1F495,
  [WEARY] = 0x1F629,
  [OKHND] = 0x1F44C,
  [PENSV] = 0x1F614,
  [SMIRK] = 0x1F60F,
  [RECYC] = 0x267B,
  [WINK] = 0x1F609,
  [THMUP] = 0x1F44D,
  [THMDN] = 0x1F44E,
  [PRAY] = 0x1F64F,
  [PHEW] = 0x1F60C,
  [MUSIC] = 0x1F3B6,
  [FLUSH] = 0x1F633,
  [CELEB] = 0x1F64C,
  [CRY2] = 0x1F622,
  [COOL] = 0x1F60E,
  [NOEVS] = 0x1F648,
  [NOEVH] = 0x1F649,
  [NOEVK] = 0x1F64A,
  [POO] = 0x1F4A9,
  [VIC] = 0x270C,
  [BHART] = 0x1F494,
  [SLEEP] = 0x1F634,
  [SMIL2] = 0x1F605,
  [HUNRD] = 0x1F4AF,
  [CONFU] = 0x1F615,
  [TONGU] = 0x1F61C,
  [DISAP] = 0x1F61E,
  [YUMMY] = 0x1F60B,
  [CLAP] = 0x1F44F,
  [FEAR] = 0x1F631,
  [HORNS] = 0x1F608,
  [HALO] = 0x1F607,
  [BYE] = 0x1F44B,
  [SUN] = 0x2600,
  [MOON] = 0x1F314,
  [SKULL] = 0x1F480,

  // greek letters
  [UALPH] = 0x0391,
  [UBETA] = 0x0392,
  [UGAMM] = 0x0393,
  [UDELT] = 0x0394,
  [UEPSI] = 0x0395,
  [UZETA] = 0x0396,
  [UETA] = 0x0397,
  [UTHET] = 0x0398,
  [UIOTA] = 0x0399,
  [UKAPP] = 0x039A,
  [ULAMB] = 0x039B,
  [UMU] = 0x039C,
  [UNU] = 0x039D,
  [UXI] = 0x039E,
  [UOMIC] = 0x039F,
  [UPI] = 0x03A0,
  [URHO] = 0x03A1,
  [USIGM] = 0x03A3,
  [UTAU] = 0x03A4,
  [UUPSI] = 0x03A5,
  [UPHI] = 0x03A6,
  [UCHI] = 0x03A7,
  [UPSI] = 0x03A8,
  [UOMEG] = 0x03A9,
  [LALPH] = 0x03B1,
  [LBETA] = 0x03B2,
  [LGAMM] = 0x03B3,
  [LDELT] = 0x03B4,
  [LEPSI] = 0x03B5,
  [LZETA] = 0x03B6,
  [LETA] = 0x03B7,
  [LTHET] = 0x03B8,
  [LIOTA] = 0x03B9,
  [LKAPP] = 0x03BA,
  [LLAMB] = 0x03BB,
  [LMU] = 0x03BC,
  [LNU] = 0x03BD,
  [LXI] = 0x03BE,
  [LOMIC] = 0x03BF,
  [LPI] = 0x03C0,
  [LRHO] = 0x03C1,
  [LSIGM] = 0x03C3,
  [LTAU] = 0x03C4,
  [LUPSI] = 0x03C5,
  [LPHI] = 0x03C6,
  [LCHI] = 0x03C7,
  [LPSI] = 0x03C8,
  [LOMEG] = 0x03C9,
  [FSIGM] = 0x03C2,

  // other
  [LTEQ] = 0x2264, // less than or equal
  [GTEQ] = 0x2265, // greater than or equal
  [NOTEQ] = 0x2260, // not equal
  [PLMIN] = 0xB1, // plus minus
};


void dance_flsh_finished(qk_tap_dance_state_t *state, void *user_data) {
  if (state->count > 2) {
      reset_keyboard();
  }
}

enum {
  RESET_KEEB,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [RESET_KEEB] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_flsh_finished, NULL),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, default layer
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
| ESC*   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   | P SCN  |  HOME  |   END  |  P UP  | P DOWN |  DEL   |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |        | BACK   |  NUM   |        |        |        |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   |   \    | SPACE  |  LOCK  |   /    |  *     |   -    |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |             |        |        |        |        |
|    TAB     |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \      |   7    |   8    |   9    |   -    |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
|              |        |        |        |        |        |        |        |        |        |   ;    |   '    |                    |        |        |        |        |
|   CAPS LOCK  |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |       ENTER        |   4    |   5    |   6    |   +    |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|         |        |        |        |        |        |        |        |        |   ,    |    .   |   /    |                |        |        |        |        |        |
|  SHIFT  |  NUBS  |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |       SHIFT    |   UP   |   1    |   2    |   3    | ENTER  |
|_________|________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|________|
|          |          |          |                                                        |        |   MO   |   MO   |        |        |        |        |        |        |
| CTRL     |   LGUI   | L ALT    |                      SPACE                             | R ALT  |  _FN   |  _FN   |  LEFT  |  DOWN  | RIGHT  |   0    |   .    | ENTER  |
|__________|__________|__________|________________________________________________________|________|________|________|________|________|________|________|________|________|
*/



  [0] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_HOME, KC_END,  KC_PGUP, KC_PGDN, KC_DEL,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_BSPC, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,          KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
    RGB_TOG, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,                    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             TD(RESET_KEEB), KC_LEAD,   MO(1),   KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT, KC_PENT),



  /* Layer 1, function layer
____________________________________________________________________________________________________________________________________________________________________________
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |  VOL   |  VOL   |        |        |        |
| RESET  |        |        |        |        |        |        |        |        |        |        |        |        | MUTE   |  DOWN  |   UP   |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|________|
|            |  RGB   |        |  RGB   |  HUE   |  HUE   | SATUR. | SATUR. | VALUE  | VALUE  |        |        |        |             |        |        |        |        |
|            | TOGGLE |        |  MODE  |INCREASE| DCiRSE  |INCREASE| DCRSE  |INCREASE| DCRSE  |        |        |        |             |        |        |        |        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|_____________|________|________|________|________|
| BACKLIGHT    |        |        |        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
| TOGGLE       |        |        |        |        |        |        |        |        |        |        |        |                    |        |        |        |        |
|______________|________|________|________|________|________|________|________|________|________|________|________|____________________|________|________|________|________|
|         |        |        |        |BACKLHT |BACKLHT |BACKLHT |        |        |        |        |        |                |        |        |        |        |        |
|         |        |        |        | DCRSE  |TOGGLE  |INCREASE|        |        |        |        |        |                |        |        |        |        |        |
|_________|________|________|________|________|________|________|________|________|________|________|________|________________|________|________|________|________|________|
|          |          |          |                                                        |        |        |        |        |        |        |        |        |        |
|          |          |          |                                                        |        |        |        |        |        |        |        |        |        |
|__________|__________|__________|________________________________________________________|________|________|________|________|________|________|________|________|________|
BL_TOGG, BL_DEC, BL_INC changes the in-switch LEDs
*/


  [1] = LAYOUT(
    RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, RGB_TOG, _______, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,          _______, _______, _______, _______,
    BL_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
    _______, _______, _______, _______, BL_DEC,  BL_TOGG, BL_INC,  _______, _______, _______, _______, _______, KC_MEDIA_PLAY_PAUSE,          KC_VOLU, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, KC_MEDIA_REWIND, KC_VOLD, KC_MEDIA_FAST_FORWARD, _______, _______, _______),



/*   [2] = LAYOUT(
    _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______,
    _______, _______, _______, _______, _______,  _______, _______,  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
    _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______, _______, _______, _______), */
};

LEADER_EXTERNS();
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();
    SEQ_ONE_KEY(KC_GRV) {
      SEND_STRING("cd ~/dev/");
    }
    SEQ_ONE_KEY(KC_Q) {
      send_unicode_string("ಠ_ಠ");
    }
    SEQ_ONE_KEY(KC_W) {
      send_unicode_string("(ノಠ痊ಠ)ノ彡┻━┻");
    }
    SEQ_ONE_KEY(KC_A) {
      SEND_STRING(":awkward_seal:");
    }
    SEQ_ONE_KEY(KC_S) {
      SEND_STRING(":party_blob:");
    }
    SEQ_ONE_KEY(KC_D) {
      SEND_STRING(":chris:");
    }
    SEQ_ONE_KEY(KC_D) {
      SEND_STRING(":chris:");
    }
    SEQ_ONE_KEY(KC_B) {
      register_code(KC_BTN2);
      unregister_code(KC_BTN2);
      SEND_STRING("bitwarden");
      register_code(KC_ENT);
      unregister_code(KC_ENT);
      register_code(KC_ENT);
      unregister_code(KC_ENT);
    }
  }



  //leds layer
  /* uint8_t layer = biton32(layer_state);

    // INSERT CODE HERE: turn off all leds

    switch (layer) {
        case 1:
            rgblight_sethsv(103,95,100);
            break;
        case 2:
            rgblight_sethsv(100,194,100);
            break;
    } */
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}


