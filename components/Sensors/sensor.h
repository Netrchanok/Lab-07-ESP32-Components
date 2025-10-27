#ifndef SENSOR_H
#define SENSOR_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize sensor module
 */
void sensor_init(void);

/**
 * @brief Read temperature data
 * @return Temperature in Celsius
 */
float sensor_read_temperature(void);

/**
 * @brief Read humidity data
 * @return Humidity in %
 */
float sensor_read_humidity(void);

#ifdef __cplusplus
}
#endif

#endif // SENSOR_H
