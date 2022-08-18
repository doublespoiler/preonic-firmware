#include QMK_KEYBOARD_H

#define TAPPING_TERM 150

#define _QWERTY 0
#define _WORK 1
#define _RAISE 2

enum preonic_keycodes {
	QWERTY = SAFE_RANGE,
	WORK,
	RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |  esc |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | GUI  |prtscn|   \  | alt  |space | work |  fn  |space | left | down |  up  |right |
 * `-----------------------------------------------------------------------------------'
 */

[_QWERTY] = LAYOUT_preonic_grid( 
	KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, 
	KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC, 
	KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, 
	KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_SFTENT , 
	KC_LGUI, KC_PSCR, KC_BSLS, KC_LALT, KC_SPC , LT(1, KC_SPC)  , LT(2, KC_SPC)  , LT(1, KC_SPC) , KC_LEFT, KC_DOWN, KC_UP   , KC_RGHT),
	

  /* Work
 * ,-----------------------------------------------------------------------------------.
 * |  `   |      |      |      |      |      |      |      |      |      |      |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      | del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  <   |   {  |  (   |   [  |      |      |  ]   | )    |   }  |   >  |  `   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|      |      |      |      |      |      |      |      |      |      |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |  `   |      |      |      |      | home | pgdn | pgup |  end |
 * `-----------------------------------------------------------------------------------'
 */
[_WORK] = LAYOUT_preonic_grid( 
	KC_GRV , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EQL , 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, KC_DEL , 
	KC_TRNS, KC_LT  , KC_LCBR, KC_LPRN, KC_LBRC, KC_TRNS, KC_TRNS, KC_RBRC, KC_RPRN, KC_RCBR, KC_GT  , KC_TRNS, 
	KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SFTENT, 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END),
	

    /* function
 * ,-----------------------------------------------------------------------------------.
 * |  `   |xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|DT DOWN|DTUP|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|DTPRINT|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  f1  |  f2  |   f3 |   f4 |  f5  |  f6  |  f7  |  f8  |  f9  | f10  |  f11 | f12  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |RGBTOG|  MOD | SAI  | HUI  | VAI  |xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|xxxxxx|  to0 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |xxxxxx| RMOD | SAD  | HUD  | VAD  |      |      |xxxxxx|xxxxxx| mute | vold | volu |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid(
	KC_GRV , KC_NO   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , DT_DOWN  , DT_UP  , 
	KC_NO  , KC_NO   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , DT_PRNT  , 
	KC_F1  , KC_F2   , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , 
	RGB_TOG, RGB_MOD , RGB_SAI, RGB_HUI, RGB_VAI, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , TO(0)  , 
	KC_NO  , RGB_RMOD, RGB_SAD, RGB_HUD, RGB_VAD, KC_TRNS, KC_TRNS, KC_NO  , KC_NO  , KC_MUTE, KC_VOLD, KC_VOLU)
};

#ifdef AUDIO_ENABLE

float tone_startup[][2] = {

};
float tone_qwerty[][2] = SONG(QWERTY_SOUND);
float tone_work[][2]    = {

};
float tone_goodbye[][2] = SONG(GOODBYE_SOUND);
float music_scale[][2]  = SONG(MUSIC_SCALE_SOUND);

void startup_user() {
  //_delay_ms(20); // gets rid of tick
  PLAY_SONG(tone_startup);
}
void shutdown_user() {
  PLAY_SONG(tone_goodbye);
  //_delay_ms(150);
  stop_all_notes();
}

void music_on_user(void) {
  music_scale_user();
}
void music_scale_user(void) {
  PLAY_SONG(music_scale);
}

#endif



void matrix_init_user(void) {
  #ifdef AUDIO_ENABLE
  startup_user();
  #endif
}

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
        PLAY_SONG(tone_qwerty);
        #endif
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      break;
    case WORK:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
        PLAY_SONG(tone_work);
        #endif
        persistent_default_layer_set(1UL<<_WORK);
      }
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
      } else {
        layer_off(_RAISE);
      }
      break;
    default:
      return true;
      break;
  }

  return false;
}
