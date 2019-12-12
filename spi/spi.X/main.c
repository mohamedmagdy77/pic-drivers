/* 
 * File:   main.c
 * Author: M.Magdy
 *
 * Created on 31 ?????, 2019, 11:16 ?
 */

#include "spi.h"


void main(void) {
    spi_init(MASTER_FOSC_64,SAMPLE_MIDDLE,IDLE_ACTIVE,POL_LOW);
    TRISC &= ~(1<<0);       //ship select as output
    while(1){
        LC0 = 0;
        for(int i=0;i<16;i++){
            spi_send(i);
            for(int x=0;x<10000;x++){}      //delay
        }
        LC0 = 1;
    }
}

