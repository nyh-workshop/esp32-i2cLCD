#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "driver/gpio.h"
#include "driver/i2c.h"

#include "i2c_lcd.h"

void display(void *pvParameter);

extern "C" void app_main()
{
    I2CLCD lcdBP;
    lcdBP.writeText("Hello World!", 0, 0);
    lcdBP.cursorOn();
    lcdBP.cursorBlinkOff();
    printf("Hello world!\n");
    xTaskCreate(&display, "display", 2048, NULL, 5, NULL);
}

void display(void *pvParameter)
{
    while (1)
    {
        // Do something here!
        vTaskDelay(500 / portTICK_RATE_MS);
    }
}