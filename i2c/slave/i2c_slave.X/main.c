/* 
 * File:   main.c
 * Author: M.Magdy
 *
 * Created on 31 ?????, 2019, 11:41 ?
 */

#include "i2c_slave.h"

void main(void) {
    TRISD = 0;
    LATD = 0;
    i2c_init_slave(0xA2);
    
    while(1){
        
    }
}

