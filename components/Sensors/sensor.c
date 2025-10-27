#include <stdio.h>
#include <stdlib.h>
#include "esp_system.h"
#include "esp_random.h"
#include "esp_log.h"
#include "sensor.h"

static const char *TAG = "SENSOR";

void sensor_init(void)
{
    ESP_LOGI(TAG, "🔧 Sensor initialized from file: %s, line: %d", __FILE__, __LINE__);
    ESP_LOGI(TAG, "📡 Sensor module ready for operation");
}

float sensor_read_temperature(void)
{
    // จำลองการอ่านข้อมูลจาก sensor
    float temperature = 25.5 + (float)(esp_random() % 100) / 10.0f;
    ESP_LOGI(TAG, "🌡️  Temperature read: %.1f°C", temperature);
    return temperature;
}

float sensor_read_humidity(void)
{
    // จำลองการอ่านข้อมูลจาก sensor
    float humidity = 60.0 + (float)(esp_random() % 400) / 10.0f;
    ESP_LOGI(TAG, "💧 Humidity read: %.1f%%", humidity);
    return humidity;
}
