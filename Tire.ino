//Ce programe teste le processus de tir (on choisit une distance)
#include<Stepper.h>
#include<SoftwareSerial.h>
#include<Servo.h>
Servo servo;
#define pinServ 18

const int nombrePas= 32*64;
Stepper moteurElast(nombrePas, 14, 16, 15, 17);
Stepper moteurRot(nombrePas,6,8,7,9);
Stepper moteurBloq(nombrePas,10,12,11,13);
int distance = 0;
int elastique = 2500;    //le nombre de tour qu'il faut faire pour tirer l'elastque
char Data;                // Pour le bluetooth
int i = 0;                //pour compter la rotation
int rotation = 1;         //défini la rotation
double tour = 0;          //compter le nombre de pas durant lequelles le module distance parcours l'objet

void setup() {
 // put your setup code here, to run once:
  Serial.begin(9600);
  moteurElast.setSpeed(5);
  moteurRot.setSpeed(1);
  moteurBloq.setSpeed(5);
  servo.attach(pinServ);
 
}

void loop() {
  distance = 50;
  tire(distance);

  
}

void tire(int distance){
  moteurElast.step(int ((3400+ 29*distance)));
  moteurBloq.step(nombrePas/4);
  delay(1000);
  if(distance < 70){
      moteurElast.step(2000);
  }
  servo.write(10);            //recharge de la catapulte 
  delay(150);
  servo.write(100);
  if(distance < 70){
      moteurElast.step(-2000);
  }
  moteurElast.step(int (-(3400 +29*distance)));
  moteurBloq.step(-nombrePas/4);
}
