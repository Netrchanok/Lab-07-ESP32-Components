#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "sensor.h"
#include "display.h"

static const char *TAG = "LAB7-CHALLENGE";

void app_main(void)
{
    ESP_LOGI(TAG, "🚀 Lab 7-1 Challenge: Sensor and Display Demo");
    
    // Initialize both components
    sensor_init();
    display_init();
    
    while(1) {
        // Read data from the sensor component
        float temp = sensor_read_temperature();
        float hum = sensor_read_humidity();
        
        // Show data on the display component
        display_show_data(temp, hum);
        
        ESP_LOGI(TAG, "----------------------------");
        vTaskDelay(pdMS_TO_TICKS(3000));
    }
}
