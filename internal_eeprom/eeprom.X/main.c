/* 
 * File:   main.c
 * Author: M.Magdy
 *
 * Created on 31 ?????, 2019, 07:05 ?
 */

#include "eeprom.h"
#include "uart.h"


void main(void) {
    int i;
    i=0;
    char Data_read=0;
    OSCCON=0x72;		/* Use internal Osc. with 8 Mhz Frequency */
    uart_init(9600);		/* Initialize USART with 9600 baud rate */ 
    
    _eeprom_write_string(0,"mohamed magdy!!!!");

    /* As EEPROM memory location set to 0xff default So while reading data
    from EEPROM memory we are comparing it with 0xff*/

    while(Data_read!=0xff)    
    {    
        Data_read=_eeprom_read(i);
        while(send_idle()==0){}
        uart_send_char(Data_read);	/* Transmit EPROM data serially */
        i++;
    }
    while(1){};

}

