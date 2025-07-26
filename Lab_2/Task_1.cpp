//Lab Task-1: Write a C++ program with mbed APIs to display Hexadecimal Counting Pattern from 0 to 15 by blinking LEDs. 
//Implement and verify this logic on the STM32 Nucleo-64 board using Keil Studio Cloud IDE.

#include "mbed.h"
BusOut myled(PC_4,PB_13,PB_14,PB_15);
int i;
int main(){
  while(1){
    myled=0x00;
    for(i=0;i<16;i++){
      myled=myled+1; wait(0.5);
    }
  }
}
