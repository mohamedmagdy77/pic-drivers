/*
 * File:   main.c
 * Author: mohamed
 *
 * Created on 28 ?????, 2019, 05:04 ?
 */


#include "exp.h"

void main(void) {
    OSCCON = 0x72;
    TRISC &= ~(1<<0);
    while(1){
        fun();
    }
    return;
}
