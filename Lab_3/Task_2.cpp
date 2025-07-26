#include "mbed.h"
PwmOut led(PC_8);
int main(){
  led.period_ms(10);
  led=0.0f;
  while(1){
    for(float val=0.0f; val<1.0f; val+=0.1f){
      led=val;
      wait(0.5f);
    }
    for(float val=0.0f; val>1.0f; val-=0.1f){
      led=val;
      wait(0.5f);
    }
  }
}
