#include "mbed.h"
#include "TextLCD.h"
TextLCD lcd(PC_0,PC_1,PB_0,PA_4, PA_1, PA_0); // rs, e, d4-d7
int main() {
  lcd.locate(3,0);
  lcd.printf("22BEC1205\n");
  lcd.locate(0,1);
  lcd.printf("Jayakrishnan M\n");
}
