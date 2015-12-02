#include <p30f6014A.h>
#include <motor_led/e_epuck_ports.h>
#include <motor_led/e_init_port.h>
#include <motor_led/e_led.h>
#include <a_d/advance_ad_scan/e_prox.h>
#include <a_d/advance_ad_scan/e_ad_conv.h>
#include <motor_led/advance_one_timer/e_motors.h>
#include <motor_led/advance_one_timer/e_agenda.h>
#include "codec/e_sound.h"
#include "direction.h"

int sensor2[8];//store sensors in this integer array 
int cur_rotation; //current direction travelling in
int rotation[5];
int dist_right=0; //distance travelled right
int flag=0;
int goal_value=4000;//m line
int distance=0;//distance travelled forward

int get_sensor2(int value);//initialize sensors

#define PI 3.1415


/* defines used in turn_to_direction.c */
#define TURN_SPEED 1000
#define STEPS_FOR_2PI 1300.



int get_sensor2(int value){
	int event;
	int i;
	sensor2[0] = e_get_prox(0);
	sensor2[1] = e_get_prox(1);
 	sensor2[2] = e_get_prox(2);
 	sensor2[3] = e_get_prox(3);
 	sensor2[4] = e_get_prox(4);
 	sensor2[5] = e_get_prox(5);
 	sensor2[6] = e_get_prox(6);
	sensor2[7] = e_get_prox(7);
	event=0;

	for (i=0; i<8; i++) {
		if(sensor2[i]>value) {
			event = 1;
		}
	}
    // if sensors detect attacker return 1
	return event;   	
}

void set_light_detect(void){//constantly check which sensor has detected something and light corresponding LED
	
	int returnVal;
	int i;
	for(i=0;i<8;i++){
		if(sensor2[i]>350){
		e_set_led(i,2);
		}
		else{
		e_set_led(i,0);
		}
	}
}	



void store_distance(int flag){
//0 - north
//1 - east
//2 - south
//3 - west

	if(flag==0){
		
	}

}






int goal_state(int distance){
//metres after travelled around object?? how to store distance?
//colour detection using bug algorithm
//flash lights to signify goal has been reached
int goal=0;

if(goal_value<=distance){
	printf("GOAL STATE, DISTANCE = %d \n", distance);
	goal=1;
}
return goal;

}

void move_forward(){

	e_set_speed_left(500);
	e_set_speed_right(500);

}

void move_fixed_distance(){
	move_forward();
	e_set_steps_left(0);
	e_set_steps_right(0);

	while(e_get_steps_left(0)<325.0);//third revolution

	e_set_speed_left(0);
	e_set_speed_right(0);
}

void move_fixed_distance2(){
	move_forward();
	e_set_steps_left(0);
	e_set_steps_right(0);

	while(e_get_steps_left(0)<25.0);//
	e_set_speed_left(0);
	e_set_speed_right(0);
}


void store_rotation(int rotation){//for memory
	/*int i;
	int return_val;
	for(i=0;i<8,i++){
		if(rotation[i]==0){
			return_val=i;
		}
	}
	return return_val;*/
}

void set_rotation(int rotation){//sets the direction that robot is travelling in
	//for reference so robot knows what direction its going in
	cur_rotation=rotation;
}



void first_condition(int event){
	float direction;
	dist_right=0;
	void move_fixed_distance2();//move closer to object
		distance+=25;//add to distance travelled forward
	
	direction=(4.0*PI/8.0);	//turn 90 degrees to the right
	set_rotation(direction);	
	turn_direction(direction);//turn 90 degrees right
	wait(100000);//wait after rotated -give time for sensors to react
	
	e_set_steps_left(0);
	e_set_steps_right(0);
	
	while(event==1){//while object is detected and nothing is in front

		move_forward();	

		event=get_sensor2(350);
	}
		dist_right+=e_get_steps_left();//add distance travelled right to the variable
	
	//THIS SHOULD BE AN EXTRA REVOLUTION
	move_fixed_distance();//move a bit further away
	dist_right+=325;

	//printf("Distance Right = %d \n", dist_right);
	//printf("Distance Forward = %d \n", distance);
//turn right
//move forward until nothing is detected

}

void second_condition(int event){
	float direction;

	direction=(12.0*PI/8.0);
	set_rotation(direction);	
	turn_direction2(direction);//turn 90 degrees left
	wait(100000);
	move_forward();

	e_set_steps_left(0);
	e_set_steps_right(0);

	move_fixed_distance();
	//implement checking function -  if something is in front, rotate and move a bit more forward
	//realistically it should only move forward if it cannot detect anything

	e_set_steps_left(0);
	e_set_steps_right(0);

	event=get_sensor2(350);//check if event is there
	while(event==1){//move forward until nothing is detected
	
	move_forward();
	event=get_sensor2(350);
	}
	//wait, because it's causing an error
	//add distance at this point.
	

	e_set_speed_left(0);
	e_set_speed_right(0);//stop once nothing has been detected
	distance+=e_get_steps_left();

	move_fixed_distance();

	
	distance+=650;//two fixed distances travelled
		printf("Distance Right= %d \n",	dist_right);
}

void third_condition(int event){
	float direction;

	direction=(12.0*PI/8.0);
	set_rotation(direction);	
	turn_direction(direction);//turn 90 degrees left
	wait(100000);
	
	printf("Third Condition Distance Right= %d \n",	dist_right);
	printf("Third Condition Distance Forward= %d \n",	distance);
	e_set_steps_left(0);
	e_set_steps_right(0);
	move_forward();
	
	while(e_get_steps_left()<=dist_right);	
	
	e_set_speed_left(0);
	e_set_speed_right(0);

	printf("Third Condition Distance Right= %d \n",	dist_right);
	printf("Third Condition Distance Forward= %d \n",	distance);

}

void fourth_condition(int event){
	float direction;
	direction=(4.0*PI/8.0);	
	set_rotation(direction);	
	turn_direction(direction);//turn 90 degrees to the right
	//move forward until reach goal line
	
	printf("Fourth Condition Distance Forward= %d \n",	distance);

	e_set_steps_left(0);
	e_set_steps_right(0);

	
	move_forward();
/*
	while(distance<=goal_value){
		
		distance=distance+e_get_steps_left();
		e_set_steps_left(0);
		e_set_steps_right(0);
	};
*/
	printf("Fourth Condition Distance Forward= %d \n",	distance);
}

 void braitenberg_behaviour()
 {
	int event;
	
	long counter=0;//proximity counter
	long i;
	float direction;

	e_init_motors();
 	e_init_port();
	e_init_sound();
	e_calibrate_ir();
	e_set_steps_left(0);
	e_set_steps_right(0);
	e_set_speed_left(0);
	e_set_speed_right(0);
	e_start_agendas_processing();
	e_init_ad_scan(ALL_ADC);
	
	
 	while(1)
 	{
		e_activate_agenda(set_light_detect,2500);
			event=0;
			while(event==0&&goal_state(distance)==0){//Keep moving forward until an object is detected
			e_set_steps_left(0);
			e_set_steps_right(0);
			move_forward();
				//printf("left %d",	e_get_steps_left());
				//printf("right %d", e_get_steps_right());
			event=get_sensor2(1000);//check if sensors have detected an object		
			distance+=e_get_steps_left();//distance forward
			}
			printf("First Distance Forward =  %d \n", distance);

			if(event==1&&goal_state(distance)==0){
			//while an object has been detected do sequence	
				flag=1;
				first_condition(event); //turn right at first encounter of object			
				second_condition(event);//turn left move forward until nothing is detected
				third_condition(event); //turn left move forward the distance travelled in first condition
				fourth_condition(event);// turn right and move forward until goal is reached
			}
	
		if(goal_state(distance)==1){
			//stop agenda here
			e_set_speed_left(0);
			e_set_speed_right(0);
			while(1){
			LED0= 0^1;
			LED1= 0^1;
			LED2= 0^1;
			LED3= 0^1;
			LED4= 0^1;
			LED5= 0^1;
			LED6= 0^1;
			LED7= 0^1;
			wait(500000);
			}
			printf("Distance Travelled: %d",	distance);
		}
		
		e_set_speed_left(0);
		e_set_speed_right(0);
		
		
	
 
			
		 		
			
		

	}
		
			

 		
	}
