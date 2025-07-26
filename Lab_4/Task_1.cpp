#include "mbed.h"
Serial pc(USBTX,USBRX);
DigitalOut myled(PC_8);
int main(){
  printf("Press a character");
  while(1){
    int y=pc.getc();
    printf("%c\n",y);
    if(y=='H'){
      myled=1;
      wait(0.2);
    }
    else{
      myled=0;
    }
  }
}
