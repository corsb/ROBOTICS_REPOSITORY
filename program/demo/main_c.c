
/**
 * 		Position 0: Aggressive Behaviour - the robot is aggressive when the proximity sensors are activated.
 **/

#include "p30f6014A.h"
#include "stdio.h"
#include "string.h"

#include "uart/e_uart_char.h"
#include "motor_led/e_init_port.h"

#include "ComModule.h"
#include "fear_behaviour.h"
#include "aggression_behaviour.h"
#include "findRed.h"
#include "braitenberg_behaviour.h"
#include "utility.h"


#define PI 3.14159265358979

/** 
 * The main function of the application
 * 
 **/
int main() {
	char buffer[80];
	int selector;

	//system initialization 
	e_init_port();
	e_init_uart1();

	// Reset if Power on (some problem for few robots)
	if (RCONbits.POR) {
		RCONbits.POR=0;
		__asm__ volatile ("reset");
	}

	// Gets selector position
	selector= getselector();
	//sprintf(buffer, "Starting with selector pos %d\r\n", selector);
	//e_send_uart1_char(buffer, strlen(buffer));
	
	if (selector==0) {
		fear_behaviour();
	} else if (selector==1) {
		aggression_behaviour();
	} else if (selector==2) {
		love_behaviour();
	} else if (selector==3) {
		curiosity_behaviour();
	} else if (selector==4) {
		findRed();
	} else if (selector==5) {
		braitenberg_behaviour();
	} else if (selector==6) {

	} else
		// default action
	
	while(1);
	return 0;
}

