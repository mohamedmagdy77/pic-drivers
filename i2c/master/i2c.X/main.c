/* 
 * File:   main.c
 * Author: M.Magdy
 *
 * Created on 31 ?????, 2019, 11:31 ?
 */

#include "i2c.h"


void main(void) {
    TRISD = 0;
    LATD = 0;
    i2c_init_master(100000);
    i2c_start();
    i2c_send(0xA2);
    i2c_send(0x55);
    i2c_stop();
    
    for(int i=0;i<10000;i++){}
    
    i2c_start();
    i2c_send(0xA3);
    _data = i2c_recieve(0);
    i2c_stop();
    LATD = _data;
    while(1){}
}

