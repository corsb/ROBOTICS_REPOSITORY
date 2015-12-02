#include <motor_led/e_epuck_ports.h>
#include <motor_led/e_init_port.h>
#include <a_d/advance_ad_scan/e_prox.h>
#include <a_d/advance_ad_scan/e_ad_conv.h>


#define PI 3.1415
int sensor[8];
int get_sensor(void){
	int event;
	int i;
	sensor[0] = e_get_prox(0);
	sensor[1] = e_get_prox(1);
 	sensor[2] = e_get_prox(2);
 	sensor[3] = e_get_prox(3);
 	sensor[4] = e_get_prox(4);
 	sensor[5] = e_get_prox(5);
 	sensor[6] = e_get_prox(6);
	sensor[7] = e_get_prox(7);
	event=0;

	for (i=0; i<8; i++) {//this will cause delay
		if(sensor[i]>350) {
			event = 1;
		}
	}
    // if sensors detect attacker return 1
	return event;   	
}



