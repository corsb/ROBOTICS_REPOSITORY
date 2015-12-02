#include <p30f6014A.h>
#include <motor_led/e_epuck_ports.h>
#include <motor_led/e_init_port.h>
#include <a_d/advance_ad_scan/e_prox.h>
#include <a_d/advance_ad_scan/e_ad_conv.h>
#include <motor_led/advance_one_timer/e_motors.h>
#include <motor_led/advance_one_timer/e_agenda.h>

#define PI 3.1415


/* defines used in turn_to_direction.c */
#define TURN_SPEED 1000
#define STEPS_FOR_2PI 1300.



void turn_direction(float direction)
{
	int end_turn;
		
		if (direction < PI)     // turn clockwise
		{
			e_set_steps_left(0);
			e_set_speed_left(TURN_SPEED);  // motor speed in steps/s
			e_set_speed_right(-TURN_SPEED);  // motor speed in steps/s
			printf("left %d",	e_get_steps_left());
			printf("right %d", e_get_steps_right());
			// calculate how many steps the robot needs to turn
			end_turn = (int)(STEPS_FOR_2PI*(direction/(2*PI)));   
			while(e_get_steps_left() < end_turn);  // turn until done 
		}
		else 					// turn counterclockwise
		{
			e_set_steps_right(0);
			e_set_speed_left(-TURN_SPEED);  // motor speed in steps/s
			e_set_speed_right(TURN_SPEED);  // motor speed in steps/s
			printf("left %d",	e_get_steps_left());
			printf("right %d", e_get_steps_right());
			// calculate how many steps the robot needs to turn
			end_turn = (int)(STEPS_FOR_2PI*((2*PI-direction)/(2*PI)));
			while(e_get_steps_right() < end_turn); // turn until done
		}

		// stop motors
		e_set_speed_left(0);  // motor speed in steps/s
		e_set_speed_right(0);  // motor speed in steps/s
}

void turn_direction2(float direction)
{
	int end_turn;
		
		if (direction < PI)     // turn clockwise
		{
			e_set_steps_left(0);
			e_set_speed_left(500);  // motor speed in steps/s
			e_set_speed_right(-500);  // motor speed in steps/s
			printf("left %d",	e_get_steps_left());
			printf("right %d", e_get_steps_right());
			// calculate how many steps the robot needs to turn
			end_turn = (int)(STEPS_FOR_2PI*(direction/(2*PI)));   
			while(e_get_steps_left() < end_turn);  // turn until done 
		}
		else 					// turn counterclockwise
		{
			e_set_steps_right(0);
			e_set_speed_left(-500);  // motor speed in steps/s
			e_set_speed_right(500);  // motor speed in steps/s
			printf("left %d",	e_get_steps_left());
			printf("right %d", e_get_steps_right());
			// calculate how many steps the robot needs to turn
			end_turn = (int)(STEPS_FOR_2PI*((2*PI-direction)/(2*PI)));
			while(e_get_steps_right() < end_turn); // turn until done
		}

		// stop motors
		e_set_speed_left(0);  // motor speed in steps/s
		e_set_speed_right(0);  // motor speed in steps/s
}
