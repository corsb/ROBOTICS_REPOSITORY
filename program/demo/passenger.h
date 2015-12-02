#ifndef _REACTTOPROX
#define _REACTTOPROX

void passenger();
int e_get_prox(unsigned int sensor_number);
int e_get_calibrated_prox(unsigned int sensor_number);
int e_get_ambient_light(unsigned int sensor_number);
float calculate_direction3(void);
#endif