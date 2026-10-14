/**
 * @author - ezeabasili ugonna
 * @brief - sensor logger with the raspberry microcontroller
 */


#include "stdio.h"
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/i2c.h"
#include "hardware/adc.h"
#include "hardware/spi.h"

int main()
{
    stdio_init_all();

    while (true) {
        sleep_ms(100);
    }
}
