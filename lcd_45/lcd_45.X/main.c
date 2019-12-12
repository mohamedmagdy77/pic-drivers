/* 
 * File:   main.c
 * Author: M.Magdy
 *
 * Created on 31 ?????, 2019, 06:07 ?
 */

#include <stdio.h>
#include <stdlib.h>
#include "lcd_45.h"

/*
 * 
 */
void main(void) {
    _init_lcd();
    send_chr('f');
    send_string(2,3,"mohamed");
    while(1){}

}

