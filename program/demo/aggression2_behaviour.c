
#include "p30f6014A.h"
#include <math.h>
#include "motor_led/advance_one_timer/e_agenda.h"
#include "motor_led/advance_one_timer/e_motors.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "motor_led/e_epuck_ports.h"
#include "motor_led/e_init_port.h"
#include "motor_led/advance_one_timer/e_led.h"
#include "uart/e_uart_char.h"
#include "a_d/advance_ad_scan/e_prox.h"
#include "a_d/advance_ad_scan/e_ad_conv.h"
#include "codec/e_sound.h"
#include "utility.h"

#define PI 3.1415


/* defines used in turn_to_direction.c */
#define TURN_SPEED 1000
#define STEPS_FOR_2PI 1300.




int check_for_event3(void);
float calculate_direction_led3(void);
void turn_to_direction3(float direction);
int current_samples4[8];
char buffer3[80];
int counter=0;
/*
 Check for event

 Checks if an event has happened. This function dynamically 
 takes the average of the soundstream and then checks, whether
 it is tresspassing a predefined treshold.
 
 in:  void
 out: int (1: no event has occured)
          (0: an event has occured!)
*/

int check_for_event3(void)
{
	int event; 
	int i; 
	// get one single sample for all 8 sensors
	current_samples4[0]=e_get_prox(0);
	current_samples4[1]=e_get_prox(1);
	current_samples4[2]=e_get_prox(2);
	current_samples4[3]=e_get_prox(3);
	current_samples4[4]=e_get_prox(4);
	current_samples4[5]=e_get_prox(5);
	current_samples4[6]=e_get_prox(6);
	current_samples4[7]=e_get_prox(7);
    // Detect event on any of the 8 sensors
	event=0;

	for (i=0; i<8; i++) {
		if(current_samples4[i]>350) {
			event = 1;
		}
	}
    // if sensors detect attacker return 1
	return event;   					
}

// Calculate direction of attacker and turn corresponding LED on
float calculate_direction_led3(void)
{
	float direction;
	long int i;	
	
	if ( current_samples4[0]>350 )
		{direction=(PI/8.0);
		//led_na = 6;
		e_set_led(0,1);
		}
	if ( current_samples4[1]>350 )
		{direction=(2.0*PI/8.0);
		//led_nb = 9;
		e_set_led(1,0);
		}
	if ( current_samples4[2]>350 )
		{direction=(4.0*PI/8.0);
		//led_nb = 12;
		}
	if ( current_samples4[3]>350 )
		{direction=(6.0*PI/8.0);
		//led_nb = 10;
		}
	if ( current_samples4[4]>350 )
		{direction=(8.0*PI/8.0);
		//led_nb = 13;
		}
	if ( current_samples4[5]>350 )
		{direction=(10.0*PI/8.0);
		//led_nb = 14;
		}
	if ( current_samples4[6]>350 )
		{direction=(12.0*PI/8.0);
		//led_nb = 15;
		}
	if ( current_samples4[7]>350 )
		{direction=(14.0*PI/8.0);
		//led_nb = 6;
		}

// set the bit on PortA to illuminate the led
	
	//LATA = 1 << led_nb;
	



	return direction;
}
	

/*
 Turn to direction

 Turns the robot to the appropriate direction

 in:  float (angle between 0 and 2PI clockwise)
 out: void
*/
void turn_to_direction3(float direction)
{
	int end_turn;
		
		if (direction < PI)     // turn clockwise
		{
			e_set_steps_left(0);
			e_set_speed_left(TURN_SPEED);  // motor speed in steps/s
			e_set_speed_right(-TURN_SPEED);  // motor speed in steps/s
			
			// calculate how many steps the robot needs to turn
			end_turn = (int)(STEPS_FOR_2PI*(direction/(2*PI)));   
			while(e_get_steps_left() < end_turn);   // turn until done 
		}
		else 					// turn counterclockwise
		{
			e_set_steps_right(0);
			e_set_speed_left(-TURN_SPEED);  // motor speed in steps/s
			e_set_speed_right(TURN_SPEED);  // motor speed in steps/s
		
			// calculate how many steps the robot needs to turn
			end_turn = (int)(STEPS_FOR_2PI*((2*PI-direction)/(2*PI)));
			while(e_get_steps_right() < end_turn);   // turn until done
		}

		// stop motors
		e_set_speed_left(0);  // motor speed in steps/s
		e_set_speed_right(0);  // motor speed in steps/s
}
//Main function of curiosity behaviour
void aggression2_behaviour() {
	int event;
	float direction;
	long i;
 	long b=0;
    e_init_motors();
    e_start_agendas_processing();
	e_init_ad_scan(ALL_ADC);
	e_init_port();
	e_init_sound();


		

	while(1) {
		event = 0;
		while (event==0)   	// do this loop until an event has occurred
		{

			LED0 = 1^b;
			LED1 = 0^b;
			LED2 = 1^b;
			LED3 = 0^b;
			LED4 = 1^b;
			LED5 = 0^b;
			LED6 = 1^b;
			LED7 = 0^b;
			
			if(b==0){
				b=1;
			}
			else{
				b=0;	
			}

			e_set_speed_right(0);
			e_set_speed_left(0);
				


		
			
			event = check_for_event2(); // check if object is detected

			
        }      
		// if there is an event then:
		if(event==1){
			
    	    direction = calculate_direction_led3();   // do all the calculations where the attack is coming from
        	
			turn_to_direction3(direction); // turn the robot to the direction the attack is coming from
			
			attack();
			
			;  // motor speed in steps/s//back off	
        	//	wait(500000); //run away for a certain amount of time	
   		}

           	
	}								

}


void attack(){

			switch(counter){
				case 0: e_set_speed_left(200);
						e_set_speed_right(200);
						LED0=1;
						
					break;
				case 1: e_set_speed_left(0);
						e_set_speed_right(0);
						LED1=1;
						//e_play_sound(7294, 3732);
					break;
				case 2: e_set_speed_left(1000);
						e_set_speed_right(1000);
					LED2=1;
					break;
				case 3: e_   set_speed_left(200);
						e_set_speed_right(1000);
					LED2=1;
					break;
				case 4: e_set_speed_left(1000);
						e_set_speed_right(1000);
						e_play_sound(11028, 8016);
					LED2=1;
					break;
			}
			

			if(counter>=4){
				counter=0;
			}
			else{
			counter++;
			}
		
}