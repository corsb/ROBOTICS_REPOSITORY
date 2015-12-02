#ifndef _REACTTOPROX
#define _REACTTOPROX

int aggression_behaviour();
int e_get_prox(unsigned int sensor_number);
int e_get_calibrated_prox(unsigned int sensor_number);
int e_get_ambient_light(unsigned int sensor_number);
float calculate_direction(void);
void flick_led(int flag);//created by Ranvir 25.11.15
#endif