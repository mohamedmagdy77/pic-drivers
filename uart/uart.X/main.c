/* 
 * File:   main.c
 * Author: M.Magdy
 *
 * Created on 31 ?????, 2019, 05:17 ?
 */

#include "uart.h"


void main(void) {
    OSCCON = 0x72;
    TRISC &= ~(1<<0);
    LC0 = 0;
    uart_init(9600);
    MSdelay(5);
    while(1){
        if(send_idle()){
            uart_send_char('h');
            uart_send_char(10);
            uart_send_char(13);
            MSdelay(5);
        }
        if(send_idle()){
            uart_send_string("megz");
            uart_send_char(10);
            uart_send_char(13);
            MSdelay(5);
        }
        MSdelay(2000);
        if(uart_recieve_char()=='a'){
            LC0 = ~LC0;
        }
    }
}


