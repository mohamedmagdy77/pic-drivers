/* 
 * File:   xc.c
 * Author: futurecomp
 *
 * Created on 03 ?????, 2019, 03:02 ?
 */


#include "xc.h"
char arr[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f} , count = 0;

/*
 * 
 */
void main(void) {
            
    TRISCbits.RC0 = 1;
    TRISB = 0;
    OSCCON = 0x76;
    LATB = arr[count];
    while(1){
        if(PORTCbits.RC0==0){
            count++;
            LATB = arr[count];
            __delay_ms(300);
        }
        if(count>9){
            count = 0;
            LATB = arr[count];
        }
    }

}

