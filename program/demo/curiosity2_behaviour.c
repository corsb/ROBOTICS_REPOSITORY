 #include <p30f6014A.h>
 #include <motor_led/e_epuck_ports.h>
 #include <motor_led/e_init_port.h>
 #include <a_d/advance_ad_scan/e_prox.h>
 #include <a_d/advance_ad_scan/e_ad_conv.h>
 #include <motor_led/advance_one_timer/e_motors.h>
 #include <motor_led/advance_one_timer/e_agenda.h>
 

 
 void curiosity2_behaviour()
 {
 	int proxy0;
	int proxy1;
	int proxy2;
	int proxy3;
	int proxy4;
	int proxy5;
	int proxy6;
	int proxy7;

	e_init_motors();
 	e_init_port();
	e_set_speed_left(0);
	e_set_speed_right(0);
	e_start_agendas_processing();
	e_init_ad_scan(ALL_ADC);
 	while(1)
 	{
 		long i;
 		proxy0 = e_get_prox(0);
		proxy1 = e_get_prox(1);
 		proxy2 = e_get_prox(2);
 		proxy3 = e_get_prox(3);
 		proxy4 = e_get_prox(4);
 		proxy5 = e_get_prox(5);
 		proxy6 = e_get_prox(6);
		proxy7 = e_get_prox(7);

 		if(proxy0 > 1000){
 			e_set_speed_left(500);
			LED0 = 1;
			LED1 = 0;
			LED2 = 0;
			LED3 = 0;
			LED4 = 0;
			LED5 = 0;
			LED6 = 0;
			LED7 = 0;
			}
		else if(proxy1 > 1000){
 			e_set_speed_left(500);
 			LED0 = 0;
			LED1 = 1;
			LED2 = 0;
			LED3 = 0;
			LED4 = 0;
			LED5 = 0;
			LED6 = 0;
			LED7 = 0;
		}
		else if(proxy2 > 50){
 			e_set_speed_left(500);
 			LED0 = 0;
			LED1 = 0;
			LED2 = 1;
			LED3 = 0;
			LED4 = 0;
			LED5 = 0;
			LED6 = 0;
			LED7 = 0;
		}
		else if(proxy3 > 1000){
 			e_set_speed_left(500);
 			LED0 = 0;
			LED1 = 0;
			LED2 = 0;
			LED3 = 1;
			LED4 = 0;
			LED5 = 0;
			LED6 = 0;
			LED7 = 0;
		}
		else if(proxy4 > 1000){
			e_set_speed_right(500);
 			LED0 = 0;
			LED1 = 0;
			LED2 = 0;
			LED3 = 0;
			LED4 = 1;
			LED5 = 0;
			LED6 = 0;
			LED7 = 0;
		}
		else if(proxy5 > 1000){
			e_set_speed_right(500);
 			LED0 = 0;
			LED1 = 0;
			LED2 = 0;
			LED3 = 0;
			LED4 = 0;
			LED5 = 1;
			LED6 = 0;
			LED7 = 0;
		}
		else if(proxy6 > 1000){
			e_set_speed_right(500);
 			LED0 = 0;
			LED1 = 0;
			LED2 = 0;
			LED3 = 0;
			LED4 = 0;
			LED5 = 0;
			LED6 = 1;
			LED7 = 0;
		}
		else if(proxy7 > 1000){
			e_set_speed_right(500);
 			LED0 = 0;
			LED1 = 0;
			LED2 = 0;
			LED3 = 0;
			LED4 = 0;
			LED5 = 0;
			LED6 = 0;
			LED7 = 1;
		}			
 		else {
			e_set_speed_left(0);
			e_set_speed_right(0);
 			LED0 = 0;
			LED1 = 0;
			LED2 = 0;
			LED3 = 0;
			LED4 = 0;
			LED5 = 0;
			LED6 = 0;
			LED7 = 0;
			}
		
 		for(i=0; i<100000; i++) { asm("nop"); }
 	}
 }
