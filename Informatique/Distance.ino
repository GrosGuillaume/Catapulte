//Ce programme test individuellement le module distance
#include<NewPing.h>
#define trig 3
#define echo 2
NewPing sonar(trig,echo,200);
int distance;


void setup() {
  Serial.begin(9600); 
}

void loop() {
  delay(1000);
  distance = sonar.ping_cm();
  Serial.println(distance);
}
