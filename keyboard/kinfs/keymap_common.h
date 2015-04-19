/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];


#define KEYMAP( \
    K00, K01, K02, K03, K04, K05,           \
    K10, K11, K12, K13, K14,                \
    K20, K21, K22, K23, K24,                \
    K30, K31, K32, K33, K34, K35, K36,      \
    K40, K41, K42, K43,           K46, K47, \
    K50, K51, K52, K53, K54, K55, K56,      \
    K60, K61, K62, K63, K64,      K66, K67, \
    K70, K71, K72, K73, K74, K75, K76,      \
    K80, K81, K82, K83,           K86, K87, \
                   K93, K94, K95, K96, K97, \
                        KA4, KA5, KA6, KA7, \
                   KB3, KB4, KB5, KB6, KB7, \
                                            \
                   KD3, KD4, KD5, KD6, KD7, \
                   KE3, KE4, KE5, KE6, KE7, \
                        KF4, KF5, KF6, KF7 \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_NO,    KC_NO    }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_NO,    KC_NO,    KC_NO    }, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_NO,    KC_NO,    KC_NO    }, \
    { KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_NO    }, \
    { KC_##K40, KC_##K41, KC_##K42, KC_##K43, KC_NO,    KC_NO,    KC_##K46, KC_##K47 }, \
    { KC_##K50, KC_##K51, KC_##K52, KC_##K53, KC_##K54, KC_##K55, KC_##K56, KC_NO    }, \
    { KC_##K60, KC_##K61, KC_##K62, KC_##K63, KC_##K64, KC_NO,    KC_##K66, KC_##K67 }, \
    { KC_##K70, KC_##K71, KC_##K72, KC_##K73, KC_##K74, KC_##K75, KC_##K76, KC_NO    }, \
    { KC_##K80, KC_##K81, KC_##K82, KC_##K83, KC_NO,    KC_NO,    KC_##K86, KC_##K87 }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_##K93, KC_##K94, KC_##K95, KC_##K96, KC_##K97 }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_##KA4, KC_##KA5, KC_##KA6, KC_##KA7 }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_##KB3, KC_##KB4, KC_##KB5, KC_##KB6, KC_##KB7 }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_##KD3, KC_##KD4, KC_##KD5, KC_##KD6, KC_##KD7 }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_##KE3, KC_##KE4, KC_##KE5, KC_##KE6, KC_##KE7 }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_##KF4, KC_##KF5, KC_##KF6, KC_##KF7 }  \
}

#endif
