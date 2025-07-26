#include "mbed.h"
Serial pc(USBTX,USBRX);
PwmOut led(PC_8);
float brightness=0.0;
int main(){
  while(1){
    pc.printf("Enter the command to increase/decrease the brightness(i/d)");
    char c =pc.getc();
    if((c=='i')){
      pc.printf("Increasing the brightness by 10%: \r\n");
      brightness+=0.1;
      led = brightness;
    }
    if((c=='d')&&(brightness>0.0)){
      pc.printf("decreasing the brightness by 10%: \r\n");
      brightness -=0.1;
      led = brightness;
    }
  }
}
