#include<Stepper.h>
#include<NewPing.h>
#include<SoftwareSerial.h>
#include<Servo.h>
Servo servo;
#define trig 3
#define echo 2
#define RX 4
#define TX 5
#define pinServ 18

const int nombrePas= 32*64;
Stepper moteurElast(nombrePas, 14, 16, 15, 17);
Stepper moteurRot(nombrePas,6,8,7,9);
Stepper moteurBloq(nombrePas,10,12,11,13);
NewPing sonar(trig,echo,200);
SoftwareSerial BlueT(RX,TX);
int distance = 0;
int distanceAncien = 0;
int elastique = 2500;    //le nombre de tour qu'il faut faire pour tirer l'elastque
char Data;                // Pour le bluetooth
int i = 0;                //pour compter la rotation
int rotation = 1;         //défini la rotation
double tour = 0;          //compter le nombre de pas durant lequelles le module distance parcours l'objet

void setup() {
 // put your setup code here, to run once:
  Serial.begin(9600);
  BlueT.begin(9600);
  moteurElast.setSpeed(5);
  moteurRot.setSpeed(1);
  moteurBloq.setSpeed(5);
  servo.attach(pinServ);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(BlueT.available()){
    Data=BlueT.read();
  }
  if(Data=='M'){
    delay(60);
    distance = sonar.ping_cm();
    tire(distance);
    Data = 'N';
  }

  
  
//  distanceAncien = distance;
//  while((distance<distanceAncien+5)&&(distance>distance-5)){     //tourner jusqu'a repérer une cible ( avec une tolérance )
//    distanceAncien = distance;
//    moteurRot.step(rotation*nombrePas/360);
//    delay(200);
//    distance = sonar.ping_cm();
//    Serial.println(distance);
//    i++;
//    if(i>90){
//      rotation = rotation*(-1);
//      i = 0;
//    }
//  }
//  tour = 0;
//  while((distance< distanceAncien +10)&&(distance> distanceAncien -10)){  //positionner la catapulte sur la cible
//    distanceAncien = distance;
//    moteurRot.step(rotation*nombrePas/360);
//    tour = tour +nombrePas/360;
//    delay(100);
//    distance = sonar.ping_cm();
//  }
//  moteurRot.step(-rotation*tour/2);       //revenir sur la position de la cible
//  elastique =0;
//  tire(distanceAncien);       //tirer la bille
//  if(rotation <0){
//    moteurBloq.step(rotation*((tour/2)+(90-i)*nombrePas/360));          //continuer jusqu'a etre tout a gauche
//  }
//  else{
//    moteurBloq.step((int)(-1)*(i*nombrePas/360)+(tour/2)); //revenir en arrière de ce que la catapulte a parcouru
//  }
//  i = 0;
//  rotation = 1;


  
}

void tire(int distance){
  BlueT.println("*A La distance de tir est de : "+String(distance)+" cm *");
  moteurElast.step(int (-(3400+ 29*distance)));
  moteurBloq.step(nombrePas/4);
  delay(1000);
  if(distance < 70){
      moteurElast.step(-2000);
  }
  servo.write(10);            //recharge de la catapulte 
  delay(150);
  servo.write(100);
  if(distance < 70){
      moteurElast.step(2000);
  }
  moteurElast.step(int ((3400 +29*distance)));
  moteurBloq.step(-nombrePas/4);
}
