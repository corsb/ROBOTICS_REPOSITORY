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
int sensor[8];//store sensors in this integer array 

int get_sensor(void);//initialize sensors
long pxL=1;//proximity light
float timer=0;//keep track of how long nothing has been detected for
#define PI 3.1415


/* defines used in turn_to_direction.c */
#define TURN_SPEED 1000
#define STEPS_FOR_2PI 1300.



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


void flick_led(int flag){

	LED0=1^pxL;
	LED1=0^pxL;
	LED2=1^pxL;
	LED3=0^pxL;
	LED4=1^pxL;
	LED5=0^pxL;
	LED6=1^pxL;
	LED7=0^pxL;
		
		if(pxL==0){
			pxL=1;
		}
		else{
			pxL=0;
		}
wait(100000);

}


// add to a direction file
float calculate_direction(void)
{
	float direction;
	
	if ( sensor[0]>300 )
		{direction=(PI/8.0);	 //22.5
		}
	if ( sensor[1]>300 )//45
		{direction=(2.0*PI/8.0);
		}
	if ( sensor[2]>300 )//90
		{direction=(4.0*PI/8.0);
		}
	if ( sensor[3]>300 )//135
		{direction=(6.0*PI/8.0);
		}
	if ( sensor[4]>300 )//225
		{direction=(10.0*PI/8.0);
		}
	if ( sensor[5]>300 )
		{direction=(12.0*PI/8.0);
		}
	if ( sensor[6]>300 )
		{direction=(14.0*PI/8.0);
		}
	if ( sensor[7]>300 )
		{direction=(15.0*PI/8.0);
		}

	return direction;
}


 void aggression_behaviour()
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

	e_activate_agenda(flick_led, 2500);

		event=0;		

		while(event==0){//while nothing, occasionally move in random directions?
									
			event=get_sensor();		
		
		}

 	if(event==1){//if event detected
			
		if(sensor[0]>300){

				e_set_speed_left(1000);
				e_set_speed_right(1000);		

				wait(10000);

				e_set_speed_left(-500);
				e_set_speed_right(-500);
					
				wait(200000);

				e_set_speed_left(1000);
				e_set_speed_right(1000);
				e_play_sound(7294, 3732);	

				wait(500000);
				e_set_speed_left(0);
				e_set_speed_right(0);

		}
		else{//if not first sensor rotate to front
		
			direction=calculate_direction();
			turn_direction(direction);
			e_play_sound(7294, 3732);
				
		}

		
		}
		 		
			
		
	}
		
			

 		
	}
