#include <Tone.h>
#include <avr/pgmspace.h>

#include "Melody.h"

int tempo = 400;
float bps, time;

Tone tone1;
Tone tone2;

int startTime1 = 0;
int currentTime1 = 0;
int startTime2 = 0;
int currentTime2 = 0;

int currentNote1 = 0;
int currentNote2 = 0;


void setup() {
  tone1.begin(7);
  tone2.begin(12);
  
  bps = tempo / 60.0;
  time = 1 / bps * 1000;
  
  //Serial.begin(9600);
  //_size1 = sizeof(NOTES1)/sizeof(int);
  //_size2 = sizeof(NOTES2)/sizeof(int);
}


void loop() {
  
  
  currentTime1 = millis();
  if (currentTime1 - startTime1 > getLength(1, currentNote1) * time) {
    currentNote1++;
    if (currentNote1 >= size1) {
      currentNote1 = 16;
    }
    startTime1 = currentTime1;
  }
  else {
    tone1.play(getNote(1, currentNote1), getLength(1, currentNote1) * time);
  }
  
  currentTime2 = millis();
  if (currentTime2 - startTime2 > getLength(2, currentNote2) * time) {
    currentNote2++;
    if (currentNote2 >= size2) {
      currentNote2 = 16;
    }
    startTime2 = currentTime2;
  }
  else {
    tone2.play(getNote(2, currentNote2), getLength(2, currentNote2) * time);
  }
  
}
