#include "mbed.h"
PwmOut PWM1(PC_8);
int main(){
  while(1){
    PWM1.period_ms(20); 
    PWM1.pulsewidth_us(500); // 45 degree
    wait(1);
    PWM1.pulsewidth_us(1000); // 45 degree
    wait(1);
    PWM1.pulsewidth_us(1500); // 90 degree
    wait(1);
    PWM1.pulsewidth_us(2000); // 135 degree
    wait(1);
    PWM1.pulsewidth_us(2500); // 180 degree
    wait(1);
  }
}
