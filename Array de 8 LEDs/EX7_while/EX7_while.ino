/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte led0 = 6;  // donar nom al pin 5 de l’Arduino
int num=0;
//********** Setup ****************************************************************
void setup()
{
pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
while(num< 30)
{
     num++;
     digitalWrite(led0,HIGH) ;
     delay(300);
     digitalWrite(led0,LOW) ;
     delay(300);
   }
 }
 void loop()
 {
 }
//********** Funcions *************************************************************