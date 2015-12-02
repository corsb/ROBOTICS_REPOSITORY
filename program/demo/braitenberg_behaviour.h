#ifndef _BRAITENBERG
#define _BRAITENBERG

int braitenberg_avoid_behaviour();
int e_get_prox(unsigned int sensor_number);
int e_get_calibrated_prox(unsigned int sensor_number);
int e_get_ambient_light(unsigned int sensor_number);
void store_distance(int flag);
int goal_state(int distance);
void set_light_detect(void);
void move_fixed_distance();
void move_fixed_distance2();
#endif