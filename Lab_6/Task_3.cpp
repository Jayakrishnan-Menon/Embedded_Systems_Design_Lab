#include "mbed.h"
#include "TextLCD.h"
TextLCD lcd(PC_0,PC_1,PB_0,PA_4,PA_1,PA_0);
AnalogIn Ain1(PC_3);
AnalogIn Ain2(PC_2);
PwmOut PWM1(PC_8);
int main(){
  while(1){
    lcd.locate(0,0);
    PWM1.period_ms(20);
    
    float ain1 = Ain1*5;
    float ain2 = Ain2*5;
    lcd.printf("%0.2f",ain1);
    wait(0.1);
    lcd.locate(7,0);
    lcd.printf("%0.2f",ain2);
    wait(0.1);
    lcd.locate(5,1);
    
    if(Ain1 == Ain2){
      PWM1.pulsewidth_us(1500);
      lcd.printf("90");
    }
    else if(Ain1>Ain2){
      PWM1.pulsewidth_us(1000);
      lcd.printf("45");
    }
    else{
      PWM1.pulsewidth_us(2000);
      lcd.printf("135");
    }
    wait(1);
    lcd.cls();
  }
}
