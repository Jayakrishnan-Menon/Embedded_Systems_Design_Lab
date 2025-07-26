#include "mbed.h"
PwmOut led(PC_8);
int main(){
  while(1){
    led.period(2.0f);
    led.write(0.750f);
  }
}
