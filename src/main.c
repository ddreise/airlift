// main.c
//
// By: Daniel Dreise
// November 15, 2021
// All Rights Reserved

#include "pico/stdlib.h"

#define TRUE 1
#define FALSE 0

int main() {
#ifndef PICO_DEFAULT_LED_PIN
#warning pico default led pin not defined
#else
    /* Initialize */
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;   // simplify name
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    /* Main Loop */
    while (1){
        gpio_put(LED_PIN, TRUE);
        sleep_ms(100);
        gpio_put(LED_PIN, FALSE);
        sleep_ms(100);
    }
#endif
}
    
