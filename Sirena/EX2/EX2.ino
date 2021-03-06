/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 

  tone(9, 300, 1000);    // xiulet de durada valPot0
  delay(1000);              // esperar valPot0 del xiulet + valPot0 silenci
  tone(9, 600, 1000);    // xiulet de durada valPot0
  delay(1000);              // esperar valPot0 del xiulet + valPot0 silenci
  tone(9, 900, 1000);    // xiulet de durada valPot0
  delay(1000);              // esperar valPot0 del xiulet + valPot0 silenci
  tone(9, 1200, 1000);    // xiulet de durada valPot0
  delay(2000);              // esperar valPot0 del xiulet + valPot0 silenci
}

//********** Funcions *************************************************************
