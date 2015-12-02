#include <p30f6014A.h>
#include <motor_led/e_epuck_ports.h>
#include <motor_led/e_init_port.h>
#include <a_d/advance_ad_scan/e_prox.h>
#include <a_d/advance_ad_scan/e_ad_conv.h>
#include <motor_led/advance_one_timer/e_motors.h>
#include <motor_led/advance_one_timer/e_agenda.h>
#include "codec/e_sound.h"

int sensor[8];//store sensors in this integer array 

int get_sensor(void);//initialize sensors
long pxL=1;//proximity light
float timer=0;//keep track of how long nothing has been detected for
#define PI 3.1415


/* defines used in turn_to_direction.c */
#define TURN_SPEED 1000
#define STEPS_FOR_2PI 1300.


int[] set_sensors(void){
	sensor[0] = e_get_prox(0);
	sensor[1] = e_get_prox(1);
 	sensor[2] = e_get_prox(2);
 	sensor[3] = e_get_prox(3);
 	sensor[4] = e_get_prox(4);
 	sensor[5] = e_get_prox(5);
 	sensor[6] = e_get_prox(6);
	sensor[7] = e_get_prox(7);
	return sensor[8];
}

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

void flick_led(void){

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

void turn_direction(float direction)
{
	int end_turn;
		
		if (direction < PI)     // turn clockwise
		{
			e_set_steps_left(0);
			e_set_speed_left(TURN_SPEED);  // motor speed in steps/s
			e_set_speed_right(-TURN_SPEED);  // motor speed in steps/s
			
			// calculate how many steps the robot needs to turn
			end_turn = (int)(STEPS_FOR_2PI*(direction/(2*PI)));   
			while(e_get_steps_left() < end_turn){
				flick_led();
		}   // turn until done 
		}
		else 					// turn counterclockwise
		{
			e_set_steps_right(0);
			e_set_speed_left(-TURN_SPEED);  // motor speed in steps/s
			e_set_speed_right(TURN_SPEED);  // motor speed in steps/s
			
			// calculate how many steps the robot needs to turn
			end_turn = (int)(STEPS_FOR_2PI*((2*PI-direction)/(2*PI)));
			while(e_get_steps_right() < end_turn){
				flick_led();
			}   // turn until done
		}

		// stop motors
		e_set_speed_left(0);  // motor speed in steps/s
		e_set_speed_right(0);  // motor speed in steps/s
}
