/*
Copyright 2011 Jun Wako <wakojun@gmail.com>

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

#include <avr/io.h>
#include "stdint.h"
#include "led.h"


/* HHKB has no LEDs */
void led_set(uint8_t usb_led)
{
    if (usb_led&(1<<USB_LED_CAPS_LOCK)) {
        DDRC  |=  (1<<7);
        PORTC &= ~(1<<7);
    } else {
        DDRC  |=  (1<<7);
        PORTC |=  (1<<7);
    }
    if (usb_led&(1<<USB_LED_NUM_LOCK)) {
        DDRB  |=  (1<<6);
        PORTB &= ~(1<<6);
    } else {
        DDRB  |=  (1<<6);
        PORTB |=  (1<<6);
    }
    if (usb_led&(1<<USB_LED_SCROLL_LOCK)) {
        DDRB  |=  (1<<5);
        PORTB &= ~(1<<5);
    } else {
        DDRB  |=  (1<<5);
        PORTB |=  (1<<5);
    }
    if (usb_led&(1<<USB_LED_COMPOSE)) {
        DDRD  |=  (1<<7);
        PORTD &= ~(1<<7);
    } else {
        DDRD  |=  (1<<7);
        PORTD |=  (1<<7);
    }
    DDRD  |=  (1<<6);
    PORTD &= ~(1<<6);
}
