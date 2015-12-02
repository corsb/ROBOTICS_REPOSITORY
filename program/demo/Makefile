# MPLAB IDE generated this makefile for use with GNU make.
# Project: Demo.mcp
# Date: Mon Dec 01 18:15:47 2014

AS = pic30-as.exe
CC = pic30-gcc.exe
LD = pic30-ld.exe
AR = pic30-ar.exe
HX = pic30-bin2hex.exe
RM = rm

Demo.hex : Demo.cof
	$(HX) "Demo.cof"

Demo.cof : obj/main_c.o obj/utility.o obj/e_sound.o obj/e_init_port.o obj/e_init_uart1.o obj/e_uart1_rx_char.o obj/e_uart1_tx_char.o obj/e_sub_dci_kickoff.o obj/e_const_sound.o obj/e_init_codec_slave.o obj/e_init_dci_master.o obj/e_isr_dci.o obj/e_I2C_protocol.o obj/e_I2C_master_module.o obj/e_acc.o obj/e_ad_conv.o obj/e_prox.o obj/e_micro.o obj/e_agenda.o obj/e_motors.o obj/e_led.o obj/e_timers.o obj/e_interrupt.o obj/e_twiddle_factors.o obj/e_input_signal.o obj/e_fft.o obj/e_subtract_mean.o obj/e_fast_copy.o obj/e_calc_po3030k.o obj/e_calc_po6030k.o obj/e_common.o obj/e_po3030k_registers.o obj/e_po6030k_registers.o obj/aggressive_behaviour.o obj/fear_behaviour.o obj/love_behaviour.o obj/curious_behaviour.o obj/goal_seeking.o obj/high_level_behaviour.o
	$(CC) -mcpu=30F6014A "obj\main_c.o" "obj\utility.o" "obj\e_sound.o" "obj\e_init_port.o" "obj\e_init_uart1.o" "obj\e_uart1_rx_char.o" "obj\e_uart1_tx_char.o" "obj\e_sub_dci_kickoff.o" "obj\e_const_sound.o" "obj\e_init_codec_slave.o" "obj\e_init_dci_master.o" "obj\e_isr_dci.o" "obj\e_I2C_protocol.o" "obj\e_I2C_master_module.o" "obj\e_acc.o" "obj\e_ad_conv.o" "obj\e_prox.o" "obj\e_micro.o" "obj\e_agenda.o" "obj\e_motors.o" "obj\e_led.o" "obj\e_timers.o" "obj\e_interrupt.o" "obj\e_twiddle_factors.o" "obj\e_input_signal.o" "obj\e_fft.o" "obj\e_subtract_mean.o" "obj\e_fast_copy.o" "obj\e_calc_po3030k.o" "obj\e_calc_po6030k.o" "obj\e_common.o" "obj\e_po3030k_registers.o" "obj\e_po6030k_registers.o" "obj\aggressive_behaviour.o" "obj\fear_behaviour.o" "obj\love_behaviour.o" "obj\curious_behaviour.o" "obj\goal_seeking.o" "obj\high_level_behaviour.o" "C:\Users\RAWAND\Dropbox\Robotics CW\Coursework\library\fft\libdsp-coff.a" "C:\Users\RAWAND\Dropbox\Robotics CW\Coursework\library\fft\libdsp-elf.a" -o"Demo.cof" -Wl,-L"C:\Program Files\Microchip\MPLAB C30\lib",--script="..\..\..\..\..\..\..\Program Files (x86)\Microchip\MPLAB C30\support\gld\p30f6014A.gld",--defsym=__MPLAB_BUILD=1,--heap=512

obj/main_c.o : utility.h high_level_behaviour.h goal_seeking.h curious_behaviour.h love_behaviour.h fear_behaviour.h aggressive_behaviour.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ComModule.h ../../library/motor_led/e_init_port.h ../../library/uart/e_uart_char.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/string.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdio.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h main_c.c
	$(CC) -mcpu=30F6014A -x c -c "main_c.c" -o".\obj\main_c.o" -I".\..\..\library" -g -Wall

obj/utility.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h utility.c
	$(CC) -mcpu=30F6014A -x c -c "utility.c" -o".\obj\utility.o" -I".\..\..\library" -g -Wall

obj/e_sound.o : ../../library/codec/e_sound.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/codec/e_sound.c
	$(CC) -mcpu=30F6014A -x c -c ".\..\..\library\codec\e_sound.c" -o".\obj\e_sound.o" -I".\..\..\library" -g -Wall

obj/e_init_port.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/motor_led/e_init_port.c
	$(CC) -mcpu=30F6014A -x c -c ".\..\..\library\motor_led\e_init_port.c" -o".\obj\e_init_port.o" -I".\..\..\library" -g -Wall

obj/e_init_uart1.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/inc/p30f6014A.inc ../../library/uart/e_epuck_ports.inc ../../library/uart/e_init_uart1.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" ".\..\..\library\uart\e_init_uart1.s" -o".\obj\e_init_uart1.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_uart1_rx_char.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/inc/p30f6014A.inc ../../library/uart/e_uart1_rx_char.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" ".\..\..\library\uart\e_uart1_rx_char.s" -o".\obj\e_uart1_rx_char.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_uart1_tx_char.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/inc/p30f6014A.inc ../../library/uart/e_uart1_tx_char.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" ".\..\..\library\uart\e_uart1_tx_char.s" -o".\obj\e_uart1_tx_char.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_sub_dci_kickoff.o : ../../library/codec/e_common.inc ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/inc/p30f6014A.inc ../../library/codec/e_sub_dci_kickoff.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" ".\..\..\library\codec\e_sub_dci_kickoff.s" -o".\obj\e_sub_dci_kickoff.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_const_sound.o : fake
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" ".\..\..\library\codec\e_const_sound.s" -o".\obj\e_const_sound.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_init_codec_slave.o : ../../library/codec/e_common.inc ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/inc/p30f6014A.inc ../../library/codec/e_init_codec_slave.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" ".\..\..\library\codec\e_init_codec_slave.s" -o".\obj\e_init_codec_slave.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_init_dci_master.o : ../../library/codec/e_common.inc ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/inc/p30f6014A.inc ../../library/codec/e_init_dci_master.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" ".\..\..\library\codec\e_init_dci_master.s" -o".\obj\e_init_dci_master.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_isr_dci.o : ../../library/codec/e_common.inc ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/inc/p30f6014A.inc ../../library/codec/e_isr_dci.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" ".\..\..\library\codec\e_isr_dci.s" -o".\obj\e_isr_dci.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_I2C_protocol.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/I2C/e_I2C_master_module.h ../../library/I2C/e_I2C_protocol.h ../../library/I2C/e_I2C_protocol.c
	$(CC) -mcpu=30F6014A -x c -c ".\..\..\library\I2C\e_I2C_protocol.c" -o".\obj\e_I2C_protocol.o" -I".\..\..\library" -g -Wall

obj/e_I2C_master_module.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/I2C/e_I2C_master_module.h ../../library/I2C/e_I2C_master_module.c
	$(CC) -mcpu=30F6014A -x c -c ".\..\..\library\I2C\e_I2C_master_module.c" -o".\obj\e_I2C_master_module.o" -I".\..\..\library" -g -Wall

obj/e_acc.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdlib.h ../../library/motor_led/advance_one_timer/e_led.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/a_d/advance_ad_scan/e_ad_conv.h ../../library/a_d/advance_ad_scan/e_acc.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/math.h ../../library/a_d/advance_ad_scan/e_acc.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\a_d\advance_ad_scan\e_acc.c" -o".\obj\e_acc.o" -I".\..\..\library" -g -Wall

obj/e_ad_conv.o : ../../library/a_d/advance_ad_scan/e_ad_conv.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/a_d/advance_ad_scan/e_ad_conv.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\a_d\advance_ad_scan\e_ad_conv.c" -o".\obj\e_ad_conv.o" -I".\..\..\library" -g -Wall

obj/e_prox.o : ../../library/a_d/advance_ad_scan/e_prox.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/a_d/advance_ad_scan/e_ad_conv.h ../../library/a_d/advance_ad_scan/e_prox.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\a_d\advance_ad_scan\e_prox.c" -o".\obj\e_prox.o" -I".\..\..\library" -g -Wall

obj/e_micro.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/a_d/advance_ad_scan/e_ad_conv.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/a_d/advance_ad_scan/e_micro.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\a_d\advance_ad_scan\e_micro.c" -o".\obj\e_micro.o" -I".\..\..\library" -g -Wall

obj/e_agenda.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdlib.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/motor_led/advance_one_timer/e_agenda.h ../../library/motor_led/advance_one_timer/e_agenda.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\motor_led\advance_one_timer\e_agenda.c" -o".\obj\e_agenda.o" -I".\..\..\library" -g -Wall

obj/e_motors.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdlib.h ../../library/motor_led/advance_one_timer/e_agenda.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/motor_led/advance_one_timer/e_motors.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\motor_led\advance_one_timer\e_motors.c" -o".\obj\e_motors.o" -I".\..\..\library" -g -Wall

obj/e_led.o : ../../library/motor_led/advance_one_timer/e_agenda.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/motor_led/advance_one_timer/e_led.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\motor_led\advance_one_timer\e_led.c" -o".\obj\e_led.o" -I".\..\..\library" -g -Wall

obj/e_timers.o : ../../library/camera/fast_2_timer/e_poxxxx.h ../../library/camera/fast_2_timer/e_po3030k.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/camera/fast_2_timer/e_timers.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\camera\fast_2_timer\e_timers.c" -o".\obj\e_timers.o" -I".\..\..\library" -g -Wall

obj/e_interrupt.o : ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/inc/p30f6014A.inc ../../library/camera/fast_2_timer/e_interrupt.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" "..\..\library\camera\fast_2_timer\e_interrupt.s" -o".\obj\e_interrupt.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_twiddle_factors.o : ../../library/fft/e_fft.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/math.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdlib.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/dsp.h ../../library/fft/e_twiddle_factors.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\fft\e_twiddle_factors.c" -o".\obj\e_twiddle_factors.o" -I".\..\..\library" -g -Wall

obj/e_input_signal.o : ../../library/fft/e_fft.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/math.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdlib.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/dsp.h ../../library/fft/e_input_signal.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\fft\e_input_signal.c" -o".\obj\e_input_signal.o" -I".\..\..\library" -g -Wall

obj/e_fft.o : ../../library/fft/e_fft.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/math.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdlib.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/dsp.h ../../library/fft/e_fft.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\fft\e_fft.c" -o".\obj\e_fft.o" -I".\..\..\library" -g -Wall

obj/e_subtract_mean.o : ../../library/fft/e_subtract_mean.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" "..\..\library\fft\e_subtract_mean.s" -o".\obj\e_subtract_mean.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_fast_copy.o : ../../library/fft/e_fast_copy.s
	$(CC) -mcpu=30F6014A -c -I".\..\..\library" "..\..\library\fft\e_fast_copy.s" -o".\obj\e_fast_copy.o" -Wa,-I".\..\..\library\codec",-I".\..\..\library\uart",-g

obj/e_calc_po3030k.o : ../../library/motor_led/e_init_port.h ../../library/motor_led/e_epuck_ports.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/I2C/e_I2C_master_module.h ../../library/I2C/e_I2C_protocol.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/camera/fast_2_timer/e_poxxxx.h ../../library/camera/fast_2_timer/e_po3030k.h ../../library/camera/fast_2_timer/e_poxxxx.h ../../library/camera/fast_2_timer/e_calc_po3030k.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\camera\fast_2_timer\e_calc_po3030k.c" -o".\obj\e_calc_po3030k.o" -I".\..\..\library" -g -Wall

obj/e_calc_po6030k.o : ../../library/motor_led/e_init_port.h ../../library/motor_led/e_epuck_ports.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/I2C/e_I2C_master_module.h ../../library/I2C/e_I2C_protocol.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/camera/fast_2_timer/e_poxxxx.h ../../library/camera/fast_2_timer/e_po6030k.h ../../library/camera/fast_2_timer/e_calc_po6030k.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\camera\fast_2_timer\e_calc_po6030k.c" -o".\obj\e_calc_po6030k.o" -I".\..\..\library" -g -Wall

obj/e_common.o : ../../library/motor_led/e_init_port.h ../../library/motor_led/e_epuck_ports.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/I2C/e_I2C_master_module.h ../../library/I2C/e_I2C_protocol.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/camera/fast_2_timer/e_po6030k.h ../../library/camera/fast_2_timer/e_poxxxx.h ../../library/camera/fast_2_timer/e_po3030k.h ../../library/camera/fast_2_timer/e_poxxxx.h ../../library/camera/fast_2_timer/e_common.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\camera\fast_2_timer\e_common.c" -o".\obj\e_common.o" -I".\..\..\library" -g -Wall

obj/e_po3030k_registers.o : ../../library/camera/fast_2_timer/e_poxxxx.h ../../library/camera/fast_2_timer/e_po3030k.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/I2C/e_I2C_master_module.h ../../library/I2C/e_I2C_protocol.h ../../library/camera/fast_2_timer/e_po3030k_registers.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\camera\fast_2_timer\e_po3030k_registers.c" -o".\obj\e_po3030k_registers.o" -I".\..\..\library" -g -Wall

obj/e_po6030k_registers.o : ../../library/camera/fast_2_timer/e_poxxxx.h ../../library/camera/fast_2_timer/e_po6030k.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/I2C/e_I2C_master_module.h ../../library/I2C/e_I2C_protocol.h ../../library/camera/fast_2_timer/e_po6030k_registers.c
	$(CC) -mcpu=30F6014A -x c -c "..\..\library\camera\fast_2_timer\e_po6030k_registers.c" -o".\obj\e_po6030k_registers.o" -I".\..\..\library" -g -Wall

obj/aggressive_behaviour.o : ../../library/motor_led/advance_one_timer/e_led.h ../../library/motor_led/e_init_port.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/string.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014a.h aggressive_behaviour.c
	$(CC) -mcpu=30F6014A -x c -c "aggressive_behaviour.c" -o".\obj\aggressive_behaviour.o" -I".\..\..\library" -g -Wall

obj/fear_behaviour.o : utility.h ../../library/a_d/advance_ad_scan/e_ad_conv.h ../../library/a_d/advance_ad_scan/e_prox.h ../../library/uart/e_uart_char.h ../../library/motor_led/advance_one_timer/e_led.h ../../library/motor_led/e_init_port.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/string.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdlib.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdio.h ../../library/motor_led/advance_one_timer/e_motors.h ../../library/motor_led/advance_one_timer/e_agenda.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/math.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h fear_behaviour.c
	$(CC) -mcpu=30F6014A -x c -c "fear_behaviour.c" -o".\obj\fear_behaviour.o" -I".\..\..\library" -g -Wall

obj/love_behaviour.o : ../../library/motor_led/advance_one_timer/e_led.h ../../library/motor_led/e_init_port.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/string.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014a.h love_behaviour.c
	$(CC) -mcpu=30F6014A -x c -c "love_behaviour.c" -o".\obj\love_behaviour.o" -I".\..\..\library" -g -Wall

obj/curious_behaviour.o : ../../library/a_d/advance_ad_scan/e_micro.h ../../library/a_d/advance_ad_scan/e_ad_conv.h ../../library/motor_led/advance_one_timer/e_motors.h ../../library/motor_led/advance_one_timer/e_agenda.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/math.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h curious_behaviour.c
	$(CC) -mcpu=30F6014A -x c -c "curious_behaviour.c" -o".\obj\curious_behaviour.o" -I".\..\..\library" -g -Wall

obj/goal_seeking.o : utility.h ../../library/a_d/advance_ad_scan/e_ad_conv.h ../../library/a_d/advance_ad_scan/e_prox.h ../../library/motor_led/advance_one_timer/e_led.h ../../library/motor_led/e_init_port.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../library/uart/e_uart_char.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/string.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdlib.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdio.h ../../library/motor_led/advance_one_timer/e_motors.h ../../library/motor_led/advance_one_timer/e_agenda.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/math.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h goal_seeking.c
	$(CC) -mcpu=30F6014A -x c -c "goal_seeking.c" -o".\obj\goal_seeking.o" -I".\..\..\library" -g -Wall

obj/high_level_behaviour.o : utility.h ../../library/a_d/advance_ad_scan/e_ad_conv.h ../../library/a_d/advance_ad_scan/e_prox.h ../../library/uart/e_uart_char.h ../../library/motor_led/advance_one_timer/e_led.h ../../library/motor_led/e_init_port.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h ../../library/motor_led/e_epuck_ports.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/string.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdlib.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/yvals.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/stdio.h ../../library/motor_led/advance_one_timer/e_motors.h ../../library/motor_led/advance_one_timer/e_agenda.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/include/math.h ../../../../../../../program\ files\ (x86)/microchip/mplab\ c30/support/h/p30f6014A.h high_level_behaviour.c
	$(CC) -mcpu=30F6014A -x c -c "high_level_behaviour.c" -o".\obj\high_level_behaviour.o" -I".\..\..\library" -g -Wall

clean : 
	$(RM) "obj\main_c.o" "obj\utility.o" "obj\e_sound.o" "obj\e_init_port.o" "obj\e_init_uart1.o" "obj\e_uart1_rx_char.o" "obj\e_uart1_tx_char.o" "obj\e_sub_dci_kickoff.o" "obj\e_const_sound.o" "obj\e_init_codec_slave.o" "obj\e_init_dci_master.o" "obj\e_isr_dci.o" "obj\e_I2C_protocol.o" "obj\e_I2C_master_module.o" "obj\e_acc.o" "obj\e_ad_conv.o" "obj\e_prox.o" "obj\e_micro.o" "obj\e_agenda.o" "obj\e_motors.o" "obj\e_led.o" "obj\e_timers.o" "obj\e_interrupt.o" "obj\e_twiddle_factors.o" "obj\e_input_signal.o" "obj\e_fft.o" "obj\e_subtract_mean.o" "obj\e_fast_copy.o" "obj\e_calc_po3030k.o" "obj\e_calc_po6030k.o" "obj\e_common.o" "obj\e_po3030k_registers.o" "obj\e_po6030k_registers.o" "obj\aggressive_behaviour.o" "obj\fear_behaviour.o" "obj\love_behaviour.o" "obj\curious_behaviour.o" "obj\goal_seeking.o" "obj\high_level_behaviour.o" "Demo.cof" "Demo.hex"

