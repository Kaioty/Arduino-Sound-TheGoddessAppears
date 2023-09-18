#include "notes.h";
int thePin = 8;
int thePin2 = 7;
// long noteDuration = 188;
long noteDuration = 94;
//long spaceBetweenNotes = noteDuration * 1.15;
long spaceBetweenNotes = noteDuration;
int freqMin = 31;
int freqMax = 4978;
int freqTone = 0;
int xx = 0;
int bars01[] = {NOTE_B3, xx, NOTE_B4, xx, NOTE_DS5, xx, NOTE_AS5, xx, xx, xx, xx, xx, xx, xx, xx, xx};
int bars02[] = {xx, xx, NOTE_DS5, xx, NOTE_AS5, xx, NOTE_GS5, xx, NOTE_CS6, xx, NOTE_AS5, xx, NOTE_GS5, xx, NOTE_DS5, xx};
int bars03[] = {NOTE_AS3, xx, NOTE_AS4, xx, NOTE_CS5, xx, NOTE_GS5, xx, xx, xx, xx, xx, xx, xx, xx, xx};
int bars04[] = {xx, xx, NOTE_AS3, xx, NOTE_GS5, xx, NOTE_FS5, xx, NOTE_CS6, xx, NOTE_GS5, xx, NOTE_FS5, xx, NOTE_CS5, xx};
int bars05[] = {NOTE_GS3, xx, NOTE_GS4, xx, NOTE_B4, xx, NOTE_FS5, xx, xx, xx, xx, xx, xx, xx, xx, xx};
int bars06[] = {NOTE_GS3, xx, NOTE_GS4, xx, NOTE_FS5, xx, NOTE_F5, xx, NOTE_GS5, xx, NOTE_F5, xx, NOTE_CS5, xx, NOTE_B4, xx};
int bars07[] = {NOTE_FS3, xx, NOTE_FS4, xx, NOTE_AS4, xx, NOTE_F5, xx, xx, xx, xx, xx, xx, xx, xx, xx};
int bars08[] = {NOTE_FS3, xx, NOTE_FS4, xx, NOTE_F5, xx, NOTE_DS5, xx, NOTE_GS5, xx, NOTE_FS5, xx, NOTE_CS6, xx, NOTE_B5, xx};
int x = 3;

//int bars11[] = {NOTE_AS7, xx, NOTE_DS7, xx, NOTE_B6, xx, NOTE_GS6, xx, NOTE_GS7, xx, NOTE_DS7, xx, NOTE_B6, xx, NOTE_GS6, xx};
//int bars12[] = {NOTE_G7, xx, NOTE_DS7, xx, NOTE_B6, xx, NOTE_GS6, xx, NOTE_GS7, xx, NOTE_DS7, xx, NOTE_B6, xx, NOTE_GS6, xx};


int bars99[] = {NOTE_AS7, NOTE_GS7, NOTE_G7, NOTE_GS7};

//int bars01[] = {NOTE_B3, NOTE_B4, NOTE_DS5, NOTE_AS5};
//int bars02[][] = 
// last note needs to ring out for 4 noteDurations.
// Delay needs to be same length as note duration for note to ring out.

void setup() {
  // put your setup code here, to run once:
//  for (int i = freqMin; i <= freqMax; i+=31){
//    tone(thePin, i, noteDuration);
//    delay(spaceBetweenNotes);
//  }
while (x >= 0){
  for (int i=0; i < 15; i++){
    tone(thePin, bars01[i], noteDuration);
    //tone(thePin2, bars11[i], noteDuration);
    delay(spaceBetweenNotes);
  }
  for (int j=0; j < 15; j++){
    tone(thePin, bars02[j], noteDuration);
    //tone(thePin2, bars12[j], noteDuration);
    delay(spaceBetweenNotes);
  }
  delay(spaceBetweenNotes);
  for (int h=0; h < 15; h++){
    tone(thePin, bars03[h], noteDuration);
    delay(spaceBetweenNotes);
  }
  for (int l=0; l < 15; l++){
    tone(thePin, bars04[l], noteDuration);
    delay(spaceBetweenNotes);
  }
  delay(spaceBetweenNotes);
  for (int h=0; h < 15; h++){
    tone(thePin, bars05[h], noteDuration);
    delay(spaceBetweenNotes);
  }
  for (int l=0; l < 15; l++){
    tone(thePin, bars06[l], noteDuration);
    delay(spaceBetweenNotes);
  }
  delay(spaceBetweenNotes);
  for (int h=0; h < 15; h++){
    tone(thePin, bars07[h], noteDuration);
    delay(spaceBetweenNotes);
  }
  for (int l=0; l < 15; l++){
    tone(thePin, bars08[l], noteDuration);
    delay(spaceBetweenNotes);
  }
  delay(spaceBetweenNotes);
x--;
}
  
  //tone(thePin, NOTE_AS5, 752);
  delay(752);
  //tone(thePin, 1000, noteDuration);
  //delay(spaceBetweenNotes); 
  noTone(thePin);
}

void loop() {
  // put your main code here, to run repeatedly:

}
