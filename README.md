# esp32-i2cLCD

## Simple ESP32 program with I2C LCD.

The I2C adapter is commonly found in eBay. Plug a basic HD44780 LCD and you can print some text on the screen.

The sample program inside just prints "Hello World!" on the screen.

### Connection: 
- SCL -> pin 21 on ESP32
- SDA -> pin 22 on ESP32

![alt tag](https://github.com/uncle-yong/esp32-i2cLCD/blob/master/i2c%20LCD.PNG)

### Requirements:
- ESP32-IDF
- Visual Studio Code
- I2C LCD module
- Level shifter module (because the LCD module is +5V and the ESP32 is only working at +3.3V)

## For more information of installing the toolchain w/ Visual Studio code, proceed to the hackaday page:
1. https://hackaday.io/project/53259-deploying-standalone-esp32-idf-sdk-platform (without PlatformIO)
2. https://hackaday.io/project/43374-esp32-idf-deploying-the-development-platform (with PlatformIO)
 
Microsecond delay code is from: https://github.com/espressif/arduino-esp32
