//Lab Task-1: Write a C++ program with mbed APIs to control the brightness of the LED using a PWM signal with duty cycle 75%. Assume PWM period as 2 Seconds. 
//Implement and verify this logic on the STM32 Nucleo-64 board using Keil Studio Cloud IDE.

#include "mbed.h"
PwmOut led(PC_8);
int main(){
  while(1){
    led.period(2.0f);
    led.write(0.750f);
  }
}
