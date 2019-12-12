/* 
 * File:   delay.c
 * Author: mohamed
 *
 * Created on 28 ?????, 2019, 06:05 ?
 */
#include "delay.h"

void MSdelay(unsigned int val)
{
    unsigned int i,j;
    for(i=0;i<val;i++){
        for(j=0;j<165;j++){}
    }  /*This count Provide delay of 1 ms for 8MHz Frequency */
 }

