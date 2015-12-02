#include <p30f6014A.h>
#include <motor_led/e_epuck_ports.h>
#include <motor_led/e_init_port.h>
#include <a_d/advance_ad_scan/e_prox.h>
#include <a_d/advance_ad_scan/e_ad_conv.h>
#include <motor_led/advance_one_timer/e_motors.h>
#include <motor_led/advance_one_timer/e_agenda.h>
#include <motor_led/e_led.h>
#include "codec/e_sound.h"
#include "direction.h"
int sensor3[8];//store sensors in this integer array 

int get_sensor3(void);//initialize sensors
#define PI 3.1415


/* defines used in turn_to_direction.c */
#define TURN_SPEED 1000
#define STEPS_FOR_2PI 1300.



int get_sensor3(void){
	int event;
	int i;
	sensor3[0] = e_get_prox(0);
	sensor3[1] = e_get_prox(1);
 	sensor3[2] = e_get_prox(2);
 	sensor3[3] = e_get_prox(3);
 	sensor3[4] = e_get_prox(4);
 	sensor3[5] = e_get_prox(5);
 	sensor3[6] = e_get_prox(6);
	sensor3[7] = e_get_prox(7);
	event=0;

	for (i=0; i<8; i++) {//this will cause delay
		if(sensor3[i]>50) {
			event = 1;
		}
	}
    // if sensors detect attacker return 1
	return event;   	
}




// add to a direction file
float calculate_direction3(void)
{
	float direction;
	
	if ( sensor3[0]>50 )
		{direction=(PI/8.0);	 //22.5
		}
	if ( sensor3[1]>50 )//45
		{direction=(2.0*PI/8.0);
		}
	if ( sensor3[2]>50 )//90
		{direction=(4.0*PI/8.0);
		}
	if ( sensor3[3]>50 )//135
		{direction=(6.0*PI/8.0);
		}
	if ( sensor3[4]>50 )//225
		{direction=(10.0*PI/8.0);
		}
	if ( sensor3[5]>50 )
		{direction=(12.0*PI/8.0);
		}
	if ( sensor3[6]>50 )
		{direction=(14.0*PI/8.0);
		}
	if ( sensor3[7]>50 )
		{direction=(15.0*PI/8.0);
		}

	return direction;
}

void hail_cab(){

	e_play_sound(0,2112);

	wait(500000);
}

 void passenger()
 {
	int event;
	long counter=0;//proximity counter
	long i;
	float direction;

	e_init_motors();
 	e_init_port();
	e_init_sound();
	e_set_speed_left(0);
	e_set_speed_right(0);
	e_start_agendas_processing();
	e_init_ad_scan(ALL_ADC);
 	while(1)
 	{

		event=0;		

		while(event==0){//while nothing, occasionally move in random directions?
					
			hail_cab();
			event=get_sensor();		
		
		}

 	if(event==1){//if event detected
			
		if(sensor3[0]>300){

				e_set_speed_left(1000);
				e_set_speed_right(1000);		

		}
		else{//if not first sensor rotate to front
		
			direction=calculate_direction();
			turn_direction(direction);
			e_play_sound(7294, 3732);
				
		}

		
		}
		 		
			
		
	}
		
			

 		
	}
