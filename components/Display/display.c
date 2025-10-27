#include <stdio.h>
#include "esp_log.h"
#include "display.h"

static const char *TAG = "DISPLAY";

void display_init(void)
{
    ESP_LOGI(TAG, "🖥️  Display initialized");
}

void display_show_data(float temperature, float humidity)
{
    ESP_LOGI(TAG, "┌──────────────────┐");
    ESP_LOGI(TAG, "│   SENSOR DATA    │");
    ESP_LOGI(TAG, "├──────────────────┤");
    ESP_LOGI(TAG, "│ Temp: %6.2f°C │", temperature);
    ESP_LOGI(TAG, "│ Humi: %6.2f%%  │", humidity);
    ESP_LOGI(TAG, "└──────────────────┘");
}

void display_clear(void)
{
    ESP_LOGI(TAG, ""); // Just prints a blank line to simulate a clear
}
