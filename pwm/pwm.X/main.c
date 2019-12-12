/* 
 * File:   main.c
 * Author: M.Magdy
 *
 * Created on 31 ?????, 2019, 07:22 ?
 */


#include "pwm.h"

void main(void) {
    OSCCON = 0x72;      //Set internal clock to 8MHz
    pwm_init(10000,512);
    start_pwm();
    //for(int i=0;i<10000;i++);
    //stop_pwm();
    while(1){}
}

