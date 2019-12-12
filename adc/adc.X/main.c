/* 
 * File:   main.c
 * Author: M.Magdy
 *
 * Created on 31 ?????, 2019, 05:35 ?
 */

#include <stdio.h>
#include <string.h>

#include "adc.h"
#include "lcd_45.h"

/*
 * 
 */
void main(void) {
    char data[10];    
    int digital;  
    float voltage;
    int dig_old=-1;
    adc_init();
    _init_lcd();
    while(1){
        digital = adc_read(1);
        if(digital != dig_old){
            dig_old = digital;
            voltage= digital*((float)5/(float)1023);  
        
            /*It is used to convert integer value to ASCII string*/
            sprintf(data,"%.2f",voltage);

            strcat(data," Volt");	/*Concatenate result and unit to print*/
            send_string(1,4,"voltage");
            send_string(2,4,data);/*Send string data for printing*/
        }
    }
}


