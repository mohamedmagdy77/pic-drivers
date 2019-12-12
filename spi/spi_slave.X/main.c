/* 
 * File:   main.c
 * Author: M.Magdy
 *
 * Created on 31 ?????, 2019, 11:22 ?
 */

#include "spi_slave.h"


void main(void) {
    spi_init(SLAVE_SS_ENABLED,SAMPLE_MIDDLE,IDLE_ACTIVE,POL_LOW);
    TRISD = 0;
    while(1){
       LATD = spi_recieve();
    }
}

