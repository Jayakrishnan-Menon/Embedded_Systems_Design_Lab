#include "mbed.h"
#include "TextLCD.h"
TextLCD lcd(PC_0,PC_1,PB_0,PA_4,PA_1,PA_0); // rs, e, d4-d7
Serial pc(USBTX,USBRX);
int main(){
  while(1){
    pc.printf("\nPress a Character: ");
    char y=pc.getc();
    lcd.locate(3,0);
    lcd.putc(y);
    pc.putc(y);
  }
}
