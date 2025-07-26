#include "mbed.h"
Serial pc(USBTX,USBRX);
AnalogIn ain(PC_3);
PwmOut PWM1(PC_8);
int main(){
  while(1){
    float value =ain*5;
    pc.printf("The reading of pot:%f",value);
    wait(1);
    PWM1.period(0.01);
    PWM1=ain;
  }
}
