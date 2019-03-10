//Ce programme test individuellement le moteur servo
#include<Servo.h>
Servo servo;
#define pinServ 18
const int nombrePas= 32*64;

void setup() {
  Serial.begin(9600);
  servo.attach(pinServ);
 
}

void loop() {
  servo.write(10);
  delay(500);
  servo.write(100);
  delay(500);
}
