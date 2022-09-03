 // ======================================================================
 //
 //         Copyright (C) 2007-2008 Wisdom__Lee   
 //         All rights reserved
 //
 //         filename :KEY
 //         description :
 //
 //         created by Wisdom__Lee
 //          https://space.bilibili.com/14956861
 //
 // ======================================================================




#include "key.h"


void key_all_init(){
	  rcu_periph_clock_enable(RCU_GPIOA);
		rcu_periph_clock_enable(RCU_GPIOB);
		rcu_periph_clock_enable(RCU_GPIOC);
    rcu_periph_clock_enable(RCU_AF);

	  gpio_init(u1_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u1_pin);
	  gpio_init(u2_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u2_pin);
	  gpio_init(u3_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u3_pin);
	  gpio_init(u4_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u4_pin);
	  gpio_init(u5_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u5_pin);
	  gpio_init(u6_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u6_pin);
	  gpio_init(u7_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u7_pin);
	  gpio_init(u8_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u8_pin);
	  gpio_init(u9_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u9_pin);
	  gpio_init(u10_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u10_pin);
	  gpio_init(u11_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u11_pin);
	  gpio_init(u12_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u12_pin);
	  gpio_init(u13_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u13_pin);
	  gpio_init(u14_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u14_pin);	
	  gpio_init(u15_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u15_pin);
	  gpio_init(u16_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u16_pin);
	  gpio_init(u17_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u17_pin);
		gpio_init(u18_port, GPIO_MODE_IPU, GPIO_OSPEED_50MHZ, u18_pin);
}

uint8_t data2(){//C or SPACE
	if(!gpio_input_bit_get(u14_port,u14_pin)){
		return Keyboard_c;
	}
	else if(!gpio_input_bit_get(u12_port,u12_pin)){
		return Keyboard_KongGe;
	}
	else{
		return 0;
	}

}
uint8_t data3(void){//W or S 
		if(!gpio_input_bit_get(u9_port,u9_pin)){
			  return Keyboard_w;
		}
		else if(!gpio_input_bit_get(u10_port,u10_pin)){
			  return Keyboard_s;
		}
    return 0U;
}



uint8_t data4(void){
	
		if(!gpio_input_bit_get(u7_port,u7_pin)){
			  return Keyboard_a;
		}
		if(!gpio_input_bit_get(u13_port,u13_pin)){
			  return Keyboard_d;
		}
    return 0U;
}

uint8_t data5(void){
				if (!gpio_input_bit_get(u5_port,u5_pin)) {//E
						return Keyboard_e;
  				}
				else if(!gpio_input_bit_get(u15_port,u15_pin)){//Q
						return Keyboard_q;
				}
				else if(!gpio_input_bit_get(u1_port,u1_pin)){//F
						return Keyboard_f;
				}
//				else if(!gpio_input_bit_get(GPIOA,GPIO_PIN_3)){//M
//								hid->data[5] = 0x10U;
//				}
				else{
					return 0;
				}

}
uint8_t data6(void);
uint8_t data7(void);
uint8_t data8(void);











