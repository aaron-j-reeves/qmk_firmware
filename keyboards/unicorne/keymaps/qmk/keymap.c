// keymap.c
#include QMK_KEYBOARD_H
#include "audio.h"
#include "song_list.h"
#include "user_song_list.h"
#include "layers.h"
#include "combos.h"
#include "secure.h" // generated by script

// Define the total number of combos
#define COMBO_COUNT 10

// Enum for custom keycodes
enum custom_keycodes {
    SECURE = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// [0]
[_QWTY] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
    LT(_SYMB, KC_ESC),                  KC_Q,                KC_W,                KC_E,                KC_R,                KC_T,                                                              KC_Y,                KC_U,                KC_I,                KC_O,                KC_P,             KC_BSPC,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
            SYMBTAB,                    KC_A,                KC_S,                KC_D,                KC_F,                KC_G,                                                              KC_H,                KC_J,                KC_K,                KC_L,             KC_SCLN, LT(_FUNC, KC_QUOTE),
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
            SC_LSPO,                    KC_Z,                KC_X,                KC_C,                KC_V,                KC_B,                                                              KC_N,                KC_M,            KC_COMMA,              KC_DOT,            KC_SLASH,             SC_RSPC,
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                            LCTL_T(KC_DEL),      LALT_T(KC_BSPC), LT(_NUMB, KC_ENTER),     LT(_NAVI, KC_SPACE),     RGUI_T(KC_PSCR),       MEH_T(KC_F24)
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

),

// [1]
[_GALM] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
                _______,                KC_B,                KC_L,                KC_D,                KC_C,                KC_V,                                                              KC_J,                KC_Y,                KC_O,                KC_U,            KC_COMMA,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,                KC_N,                KC_R,                KC_T,                KC_S,                KC_G,                                                              KC_P,                KC_H,                KC_A,                KC_E,                KC_I, LT(_FUNC, KC_SLASH),
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,                KC_X,                KC_Q,                KC_M,                KC_W,                KC_Z,                                                              KC_K,                KC_F,            KC_QUOTE,             KC_SCLN,              KC_DOT,             _______,
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                                    _______,             _______,             _______,                 _______,             _______,             _______
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

),

// [2]
[_MOUS] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                                    _______,             KC_BTN2,             KC_BTN1,                 KC_BTN1,             KC_BTN2,             _______
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

),

// [3]
[_NUMB] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
            KC_GRAVE,             C(S(KC_P)),        LSA(KC_DOWN),         LALT(KC_UP),          LSA(KC_UP),          LCTL(KC_D),                                                          KC_GRAVE,                KC_7,                KC_8,                KC_9,         KC_KP_MINUS,             KC_BSPC,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
            MO(_LOWR),            LCTL(KC_A),             KC_LEFT,       LALT(KC_DOWN),            KC_RIGHT,          C(S(KC_L)),                                                           KC_LBRC,                KC_4,                KC_5,                KC_6,             KC_RBRC,           KC_DELETE,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
            KC_CAPS,              LCTL(KC_Z),          LCTL(KC_X),          LCTL(KC_C),          LCTL(KC_V),          LCTL(KC_Y),                                                          KC_EQUAL,                KC_1,                KC_2,                KC_3,             KC_BSLS,         KC_KP_COMMA,
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                                    KC_PGUP,             KC_PGDN,             _______,                KC_MINUS,                KC_0,              KC_DOT
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

),

// [4]
[_SYMB] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
            KC_GRAVE,             LCTL(KC_Q),          LCTL(KC_W),          LCTL(KC_E),          LCTL(KC_R),          LCTL(KC_T),                                                    LSFT(KC_GRAVE),          LSFT(KC_7),          LSFT(KC_8),          LSFT(KC_9),          LSFT(KC_0),       LCTL(KC_BSPC),
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
            _______,              LCTL(KC_A),          LCTL(KC_S),          LCTL(KC_D),          LCTL(KC_F),          LCTL(KC_G),                                                     LSFT(KC_LBRC),          LSFT(KC_4),          LSFT(KC_5),          LSFT(KC_6),       LSFT(KC_RBRC),      LSFT(KC_QUOTE),
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
            CW_TOGG,              LCTL(KC_Z),          LCTL(KC_X),          LCTL(KC_C),          LCTL(KC_V),          LCTL(KC_B),                                                    LSFT(KC_EQUAL),          LSFT(KC_1),          LSFT(KC_2),          LSFT(KC_3),       LSFT(KC_BSLS),      LSFT(KC_SLASH),
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                                LCTL(KC_C),           LCTL(KC_V),           MO(_LOWR),          LSFT(KC_MINUS),      LSFT(KC_COMMA),        LSFT(KC_DOT)
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

),

// [5]
[_NAVI] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
            LSFT(KC_UP),             KC_HOME,       LCTL(KC_LEFT),               KC_UP,      LCTL(KC_RIGHT),              KC_END,                                                           KC_ACL0,             KC_WH_L,             KC_MS_U,             KC_WH_R,             KC_ACL0,             KC_ACL0,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
            KC_TAB,            LSFT(KC_LEFT),             KC_LEFT,             KC_DOWN,            KC_RIGHT,      LSFT(KC_RIGHT),                                                           KC_WH_U,             KC_MS_L,             KC_MS_D,             KC_MS_R,             KC_BTN5,           MO(_RAIS),
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
            LSFT(KC_TAB),      LSFT(KC_HOME),        RCS(KC_LEFT),       LSFT(KC_DOWN),       RCS(KC_RIGHT),        LSFT(KC_END),                                                           KC_WH_D,             KC_BTN1,             KC_BTN3,             KC_BTN2,             KC_BTN4,             _______,
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                                LCTL(KC_C),           LCTL(KC_V),            KC_ENTER,                 _______,             _______,             _______
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

),

// [6]
[_FUNC] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
                _______,              KC_NUM,               KC_F7,               KC_F8,               KC_F9,              KC_F10,                                                          RGB_RMOD,             RGB_MOD,             KC_VOLU,             RGB_TOG,             CG_TOGG,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,             KC_SCRL,               KC_F4,               KC_F5,               KC_F6,              KC_F11,                                                           RGB_SPI,             KC_MPRV,             KC_VOLD,             KC_MNXT,             AG_TOGG,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
        OSM(MOD_LSFT),              KC_PAUSE,               KC_F1,               KC_F2,               KC_F3,              KC_F12,                                                           RGB_SPD,             KC_MSTP,             KC_MUTE,             KC_MPLY,             AU_TOGG,             _______,
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                            OSM(MOD_LCTL),         OSM(MOD_LALT),             _______,               MO(_LOWR),       OSM(MOD_LGUI),             _______
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

),

// [7]
[_LOWR] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
                _______,             _______,          LGUI(KC_L),         LCA(KC_DEL),       RCS(KC_RIGHT),             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,             _______,             _______,             _______,             QK_BOOT,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                                    _______,             _______,             _______,               MO(_MENU),             _______,             _______
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

),

// [8]
[_RAIS] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             QK_BOOT,             _______,             _______,             _______,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                                    _______,             _______,           MO(_MENU),                 _______,             _______,             _______
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

),

// [9]
[_MENU] = LAYOUT_split_3x6_3(
//,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.                                             ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//|--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|                                             |--------------------+--------------------+--------------------+--------------------+--------------------+--------------------|
                _______,             _______,             _______,             _______,             _______,             _______,                                                           _______,             _______,             _______,             _______,             _______,             _______,
//`--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------.   ,--------------------+--------------------+--------------------+--------------------+--------------------+--------------------+--------------------'
                                                                                                    _______,             _______,             _______,                 _______,             _______,             _______
//                                                                                    `--------------------+--------------------+--------------------'   `--------------------+--------------------+--------------------'

)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWTY] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }, // [0]
    [_GALM] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }, // [1]
    [_MOUS] = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_MS_WH_LEFT, KC_MS_WH_RIGHT) }, // [2]
    [_NUMB] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }, // [3]
    [_SYMB] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }, // [4]
    [_NAVI] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }, // [5]
    [_FUNC] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }, // [6]
    [_LOWR] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }, // [7]
    [_RAIS] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }, // [8]
    [_MENU] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) } // [9]
};
#endif

void pointing_device_init_user(void) {
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
}

  //////////////////////////////////////////////////////////////
 /////////// LAYER LIGHTS + SOUND + CAPS LOCK INDICATOR ///////
//////////////////////////////////////////////////////////////

// Define Caps Lock LED index
#define CAPS_LOCK_LED 26

// Define the sounds for Caps Lock toggle
float caps_on[][2]  = SONG(CAPS_LOCK_ON_SOUND);
float caps_off[][2] = SONG(CAPS_LOCK_OFF_SOUND);

// Function to check if Caps Lock or Caps Word is active
bool is_caps_active(void) {
    return host_keyboard_led_state().caps_lock || is_caps_word_on();
}

// Function to update Caps Lock state and play corresponding sound
void update_caps_state(void) {
    static bool caps_state = false; // Tracks the previous Caps state
    bool new_caps_state = is_caps_active();

    if (new_caps_state != caps_state) {
        caps_state = new_caps_state;

        // Play sound based on the new Caps state
        if (caps_state) {
            PLAY_SONG(caps_on);
        } else {
            PLAY_SONG(caps_off);
        }
    }
}

// Array mapping layer numbers to their respective RGB colors
const RGB_MATRIX_USER_COLOR layer_colors[] = {
    [1] = RGB_GOLD,
    [2] = RGB_BLUE,
    [3] = RGB_PURPLE,
    [4] = RGB_CYAN,
    [5] = RGB_GREEN,
    [6] = RGB_ORANGE,
    [7] = RGB_WHITE
};

// RGB Matrix indicators function
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state | default_layer_state);
    RGB_MATRIX_USER_COLOR current_layer_color = (layer >=1 && layer <=7) ? layer_colors[layer] : 0;

    for (uint8_t i = led_min; i < led_max; i++) {
        // Set layer-based color or default off
        if (current_layer_color) {
            rgb_matrix_set_color(i, current_layer_color);
        } else {
            rgb_matrix_set_color(i, 0, 0, 0); // Default off if no layer color is set
        }

        // Override colors if Caps Lock is active
        if (is_caps_active()) {
            if ((g_led_config.flags[i] & LED_FLAG_KEYLIGHT) && (i != CAPS_LOCK_LED)) {
                rgb_matrix_set_color(i, RGB_RED); // Set keylights to red
            } else if (i == CAPS_LOCK_LED) {
                rgb_matrix_set_color(i, RGB_WHITE); // Set Caps Lock LED to white
            }
        } else {
            // If Caps Lock is not active, ensure Caps Lock LED is off
            if (i == CAPS_LOCK_LED) {
                rgb_matrix_set_color(i, 0, 0, 0);
            }
        }
    }

    return false; // Return false to allow other indicators to run
}

// User callbacks to handle LED and Caps Word state changes
void led_set_user(uint8_t usb_led) {
    update_caps_state();
}

void caps_word_set_user(bool active) {
    update_caps_state();
}

  ////////////////////////////////////////////////////////////////
 ///////////////////// CUSTOM KEY HANDLING //////////////////////
////////////////////////////////////////////////////////////////

// SECURE key macro handling and shifted NUMB layer hold + tap key handling
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case SECURE:
            if (record->event.pressed) {
                SEND_STRING(SECURE_MACRO);
            }
            return false; // Skip default processing for SECURE
        case SYMBTAB:
            if (record->tap.count == 0) {  // On hold
                if (record->event.pressed) {
                    register_mod(MOD_BIT(KC_LSFT)); // Hold LSFT
                } else {
                    unregister_mod(MOD_BIT(KC_LSFT)); // Release LSFT
                }
            }
            return true; // Continue default behavior for LT and KC_TAB
    }
    return true; // Default processing for all other keycodes
}
// Define named constant for our customized tap-hold key.
#define SYMBTAB  LT(_NUMB, KC_TAB)

  //////////////////////////////////////////////////////////////
 //////////////////////// KEY OVERRIDES ///////////////////////
//////////////////////////////////////////////////////////////

// shift+backspace > delete
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    NULL // Null terminate the array of overrides!
};
