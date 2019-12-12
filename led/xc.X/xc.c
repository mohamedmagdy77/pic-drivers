/* 
 * File:   xc.c
 * Author: futurecomp
 *
 * Created on 03 ?????, 2019, 03:02 ?
 */


#include "xc.h"

/*
 * 
 */
void main(void) {
            
    TRISBbits.RB0 = 0;
    OSCCON = 0x76;
    while(1){
        LATBbits.LATB0 = ~LATBbits.LATB0;
        __delay_ms(1000);
    }

}

