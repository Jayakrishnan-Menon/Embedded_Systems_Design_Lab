#include "mbed.h"
DigitalIn switch1(PC_13);
BusOut myled(PC_4,PB_13,PB_14,PB_15);
int main() {
while(1) {
if(switch1==0){
myled=8;
wait(0.5);
myled=4;
wait(0.5);
myled=2;
wait(0.5);
myled=1;
wait(0.5);
}
else{
myled=1;
wait(0.5);
myled=2;
wait(0.5);
myled=4;
wait(0.5);
myled=8;
wait(0.5);
}
}
}
