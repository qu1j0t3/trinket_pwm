#include <avr/io.h>
#include <util/delay.h>

#include <stdlib.h>

/* I/O map:
    0: MOSFET control
    1: MOSFET control

    For our PIR's
    * red cable is + voltage power,
    * black cable is - ground power and
    * yellow is the signal out
 */

int main() {

    DDRB = 0b11;

    while(1) {
        PORTB ^= 0b11;
        _delay_ms(500);
    }

    return EXIT_SUCCESS;
}