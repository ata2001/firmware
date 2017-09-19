#ifndef __I2C_ADDRESSES_H__
#define __I2C_ADDRESSES_H__

// Includes:

    #include "fsl_gpio.h"

// Macros:

    // 7-bit I2C addresses - see http://www.i2c-bus.org/addressing/
    // Also see https://learn.adafruit.com/i2c-addresses/the-list

    // In order to minimize the chance of I2C address collisions in the future, an explicit
    // address allocation strategy is utilized. The idea is to spread UHK I2C slaves 8 addresses
    // away from each other. Given that most I2C devices expose at most 3 address pins which
    // equal to a continuous block of 8 addresses, this strategy allows a lot of room when
    // adding further I2C slaves.

    // Reserved for general call address   0x00
    // Reserved for CBUS compatibility     0x01
    // Reserved for different bus formats  0x02
    // Reserved for future purposes        0x03
    // Reserved for high-speed mode master 0x04
    // Reserved for high-speed mode master 0x05
    // Reserved for high-speed mode master 0x06
    // Reserved for high-speed mode master 0x07
    #define I2C_ADDRESS_LEFT_KEYBOARD_HALF 0x08
    #define I2C_ADDRESS_LED_DRIVER_LEFT    0x74
    // LED driver / touchpad               0x75
    // LED driver / touchpad               0x76
    #define I2C_ADDRESS_LED_DRIVER_RIGHT   0x77
    // Touchpad                            0b00001XX
    // Reserved for 10-bit addressing      0x78
    // Reserved for 10-bit addressing      0x79
    // Reserved for 10-bit addressing      0x7A
    // Reserved for 10-bit addressing      0x7B
    // Reserved for future purposes        0x7C
    // Reserved for future purposes        0x7D
    // Reserved for future purposes        0x7E
    // Reserved for future purposes        0x7F

    // The EEPROM is featured separately as it's not connected to the main I2C bus.
    #define I2C_ADDRESS_EEPROM             0b1010000

    #define IS_I2C_LED_DRIVER_ADDRESS(address) \
        (I2C_ADDRESS_LED_DRIVER_LEFT <= (address) && (address) <= I2C_ADDRESS_LED_DRIVER_RIGHT)

#endif
