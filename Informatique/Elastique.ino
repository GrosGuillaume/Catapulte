//Ce programme teste individuellement le moteur qui enroule l'élastique
#include<Stepper.h>
const int nombrePas= 32*64;
Stepper moteurElast(nombrePas, 14, 16, 15, 17);

void setup() {
  Serial.begin(9600);
  moteurElast.setSpeed(5);
}

void loop() {
  moteurElast.step(16*64);
  delay(500);
  moteurElast.step(-16*64);
  delay(500);
}
