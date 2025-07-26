#include "mbed.h"
#include "TextLCD.h"
TextLCD lcd(PC_0,PC_1,PB_0,PA_4,PA_1,PA_0); // rs,e,d4-d7
Digitalout trigger(PC_8);
DigitalIn echo(PC_6);
DigitalOut buzzer(PC_10);
int distance = 0;
Timer sonar;
int main(){
  lcd.cls();
  while(1){
    trigger = 1;
    sonar.reset();
    wait_us(10.0);
    trigger = 0;
    while (echo == 0);
    sonar. start();
    while (echo == 1);
    sonar.stop();
    distance = (sonar.read_us())/58.0;
    lcd.locate(0,0);
    lcd.printf("Distance: ",distance);
    wait(0.2);
    if(distance<30){
      buzzer=1;
      lcd.locate(1,1);
      lcd.printf("obstacle !!!");
    }
    else{
      buzzer=0;
    }
  }
}
