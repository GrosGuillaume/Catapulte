//Ce programme teste individuellement le moteur qui bloque le lanceur
#include<Stepper.h>
const int nombrePas= 32*64;
Stepper moteurBloq(nombrePas,10,12,11,13);


void setup() {
  Serial.begin(9600);
  moteurBloq.setSpeed(5);
}

void loop() {
  moteurBloq.step(nombrePas/4);
  delay(500);
  moteurBloq.step(-nombrePas/4);
  delay(500);
}
