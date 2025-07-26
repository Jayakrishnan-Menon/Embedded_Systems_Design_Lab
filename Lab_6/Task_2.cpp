#include "mbed.h"
PwmOut PWM1(PC_8);
AnalogIn Ain(PC_3);
int main(){
  while (1){
    PWM1.period(0.010); //PWM period = 10 milli seconds
    PWM1=1-Ain;
    wait(0.1);
  }
}
