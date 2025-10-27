#ifndef DISPLAY_H
#define DISPLAY_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize display module
 */
void display_init(void);

/**
 * @brief Show sensor data on display
 */
void display_show_data(float temperature, float humidity);

/**
 * @brief Clear display
 */
void display_clear(void);

#ifdef __cplusplus
}
#endif

#endif // DISPLAY_H
