//** Includes **

//** Variables **
const byte segA = 6;          // donar nom al pin 5 de l’Arduino
const byte segB = 7;
const byte segC = 8;
const byte segD = 9;
const byte segE = 10;
const byte segF = 11;
const byte segG = 12; 

//** Setup **
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);     // definir el pin 11 com una sortida
}

//** Loop **
void loop()
{
digitalWrite(segA,LOW);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,HIGH);
digitalWrite(segE,HIGH);
digitalWrite(segF,LOW);
digitalWrite(segG,LOW);

delay(500);

digitalWrite(segA,HIGH);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,HIGH);
digitalWrite(segE,HIGH);
digitalWrite(segF,HIGH);
digitalWrite(segG,LOW);

delay(500);

digitalWrite(segA,LOW);
digitalWrite(segB,LOW);
digitalWrite(segC,LOW);
digitalWrite(segD,LOW);
digitalWrite(segE,HIGH);
digitalWrite(segF,LOW);
digitalWrite(segG,HIGH);

delay(500);

digitalWrite(segA,LOW);
digitalWrite(segB,HIGH);
digitalWrite(segC,HIGH);
digitalWrite(segD,HIGH);
digitalWrite(segE,HIGH);
digitalWrite(segF,LOW);
digitalWrite(segG,HIGH);

delay(500);

digitalWrite(segA,LOW);
digitalWrite(segB,LOW);
digitalWrite(segC,LOW);
digitalWrite(segD,LOW);
digitalWrite(segE,HIGH);
digitalWrite(segF,HIGH);
digitalWrite(segG,LOW);

delay(500);
}
