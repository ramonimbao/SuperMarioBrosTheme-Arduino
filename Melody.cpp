#include "Melody.h"

int getNote(int voice, int n) {
  if (voice == 1) {
    return pgm_read_word(&NOTES1[n]);
  }
  else {
    return pgm_read_word(&NOTES2[n]);
  }
}

float getLength(int voice, int n) {
  if (voice == 1) {
    return pgm_read_float(&LENGTH1[n]);
  }
  else {
    return pgm_read_float(&LENGTH2[n]);
  }
}

const int NOTES1[] PROGMEM = {
  // Page 1
  NOTE_E4, NOTE_E4, 0, NOTE_E4,
  0, NOTE_C4, NOTE_E4, 0,
  NOTE_G4, 0, 0, 0,
  NOTE_G3, 0, 0, 0,

  NOTE_C4, 0, 0, NOTE_G3,
  0, 0, NOTE_E3, 0,
  0, NOTE_A3, 0, NOTE_B3,
  0, NOTE_AS3, NOTE_A3, 0,
  
  NOTE_G3, NOTE_E4, NOTE_G4,
  NOTE_A4, 0, NOTE_F4, NOTE_G4,
  0, NOTE_E4, 0, NOTE_C4,
  NOTE_D4, NOTE_B3, 0, 0,
  
  NOTE_C4, 0, 0, NOTE_G3,
  0, 0, NOTE_E3, 0,
  0, NOTE_A3, 0, NOTE_B3,
  0, NOTE_AS3, NOTE_A3, 0,
  
  NOTE_G3, NOTE_E4, NOTE_G4,
  NOTE_A4, 0, NOTE_F4, NOTE_G4,
  0, NOTE_E4, 0, NOTE_C4,
  NOTE_D4, NOTE_B3, 0, 0,

  // Page 2
  0, 0, NOTE_G4, NOTE_FS4,
  NOTE_F4, NOTE_DS4, 0, NOTE_E4,
  0, NOTE_GS3, NOTE_A3, NOTE_C4,
  0, NOTE_A3, NOTE_C4, NOTE_D4,
  
  0, 0, NOTE_G4, NOTE_FS4,
  NOTE_F4, NOTE_DS4, 0, NOTE_E4,
  0, NOTE_C5, 0, NOTE_C5,
  NOTE_C5, 0, 0, 0,
  
  0, 0, NOTE_G4, NOTE_FS4,
  NOTE_F4, NOTE_DS4, 0, NOTE_E4,
  0, NOTE_GS3, NOTE_A3, NOTE_C4,
  0, NOTE_A3, NOTE_C4, NOTE_D4,
  
  0, 0, NOTE_DS4, 0,
  0, NOTE_D4, 0, 0,
  NOTE_C4, 0, 0, 0,
  0, 0, 0, 0,
  
  // Page 3
  0, 0, NOTE_G4, NOTE_FS4,
  NOTE_F4, NOTE_DS4, 0, NOTE_E4,
  0, NOTE_GS3, NOTE_A3, NOTE_C4,
  0, NOTE_A3, NOTE_C4, NOTE_D4,
  
  0, 0, NOTE_G4, NOTE_FS4,
  NOTE_F4, NOTE_DS4, 0, NOTE_E4,
  0, NOTE_C5, 0, NOTE_C5,
  NOTE_C5, 0, 0, 0,
  
  0, 0, NOTE_G4, NOTE_FS4,
  NOTE_F4, NOTE_DS4, 0, NOTE_E4,
  0, NOTE_GS3, NOTE_A3, NOTE_C4,
  0, NOTE_A3, NOTE_C4, NOTE_D4,
  
  0, 0, NOTE_DS4, 0,
  0, NOTE_D4, 0, 0,
  NOTE_C4, 0, 0, 0,
  0, 0, 0, 0,

  // Page 4
  NOTE_C4, NOTE_C4, 0, NOTE_C4,
  0, NOTE_C4, NOTE_D4, 0,
  NOTE_E4, NOTE_C4, 0, NOTE_A3,
  NOTE_G3, 0, 0, 0,
  
  NOTE_C4, NOTE_C4, 0, NOTE_C4,
  0, NOTE_C4, NOTE_D4, NOTE_E4,
  0, 0, 0, 0,
  0, 0, 0, 0,
  
  NOTE_C4, NOTE_C4, 0, NOTE_C4,
  0, NOTE_C4, NOTE_D4, 0,
  NOTE_E4, NOTE_C4, 0, NOTE_A3,
  NOTE_G3, 0, 0, 0,
  
  NOTE_E4, NOTE_E4, 0, NOTE_E4,
  0, NOTE_C4, NOTE_E4, 0,
  NOTE_G4, 0, 0, 0,
  NOTE_G3, 0, 0, 0,

  // Page 5
  NOTE_C4, 0, 0, NOTE_G3,
  0, 0, NOTE_E3, 0,
  0, NOTE_A3, 0, NOTE_B3,
  0, NOTE_AS3, NOTE_A3, 0,
  
  NOTE_G3, NOTE_E4, NOTE_G4,
  NOTE_A4, 0, NOTE_F4, NOTE_G4,
  0, NOTE_E4, 0, NOTE_C4,
  NOTE_D4, NOTE_B3, 0, 0,
  
  NOTE_C4, 0, 0, NOTE_G3,
  0, 0, NOTE_E3, 0,
  0, NOTE_A3, 0, NOTE_B3,
  0, NOTE_AS3, NOTE_A3, 0,
  
  NOTE_G3, NOTE_E4, NOTE_G4,
  NOTE_A4, 0, NOTE_F4, NOTE_G4,
  0, NOTE_E4, 0, NOTE_C4,
  NOTE_D4, NOTE_B3, 0, 0,

  // Page 6
  NOTE_E4, NOTE_C4, 0, NOTE_G3,
  0, 0, NOTE_GS3, 0,
  NOTE_A3, NOTE_F4, 0, NOTE_F4,
  NOTE_A3, 0, 0, 0,
  
  NOTE_B3, NOTE_A4, NOTE_A4,
  NOTE_A4, NOTE_G4, NOTE_F4,
  NOTE_E4, NOTE_C4, 0, NOTE_A3,
  NOTE_G3, 0, 0, 0,
  
  NOTE_E4, NOTE_C4, 0, NOTE_G3,
  0, 0, NOTE_GS3, 0,
  NOTE_A3, NOTE_F4, 0, NOTE_F4,
  NOTE_A3, 0, 0, 0,
  
  NOTE_B3, NOTE_F4, 0, NOTE_F4,
  NOTE_F4, NOTE_E4, NOTE_D4,
  NOTE_C4, NOTE_E3, 0, NOTE_E3,
  NOTE_C3, 0, 0, 0,

  // Page 7
  NOTE_E4, NOTE_C4, 0, NOTE_G3,
  0, 0, NOTE_GS3, 0,
  NOTE_A3, NOTE_F4, 0, NOTE_F4,
  NOTE_A3, 0, 0, 0,
  
  NOTE_B3, NOTE_A4, NOTE_A4,
  NOTE_A4, NOTE_G4, NOTE_F4,
  NOTE_E4, NOTE_C4, 0, NOTE_A3,
  NOTE_G3, 0, 0, 0,
  
  NOTE_E4, NOTE_C4, 0, NOTE_G3,
  0, 0, NOTE_GS3, 0,
  NOTE_A3, NOTE_F4, 0, NOTE_F4,
  NOTE_A3, 0, 0, 0,
  
  NOTE_B3, NOTE_F4, 0, NOTE_F4,
  NOTE_F4, NOTE_E4, NOTE_D4,
  NOTE_C4, NOTE_E3, 0, NOTE_E3,
  NOTE_C3, 0, 0, 0,

  // Page 8
  NOTE_C4, NOTE_C4, 0, NOTE_C4,
  0, NOTE_C4, NOTE_D4, 0,
  NOTE_E4, NOTE_C4, 0, NOTE_A3,
  NOTE_G3, 0, 0, 0,
  
  NOTE_C4, NOTE_C4, 0, NOTE_C4,
  0, NOTE_C4, NOTE_D4, NOTE_E4,
  0, 0, 0, 0,
  0, 0, 0, 0,
  
  NOTE_C4, NOTE_C4, 0, NOTE_C4,
  0, NOTE_C4, NOTE_D4, 0,
  NOTE_E4, NOTE_C4, 0, NOTE_A3,
  NOTE_G3, 0, 0, 0.,
  
  NOTE_E4, NOTE_E4, 0, NOTE_E4,
  0, NOTE_C4, NOTE_E4, 0,
  NOTE_G4, 0, 0, 0,
  NOTE_G3, 0, 0, 0,

  // Page 9
  NOTE_E4, NOTE_C4, 0, NOTE_G3,
  0, 0, NOTE_GS3, 0,
  NOTE_A3, NOTE_F4, 0, NOTE_F4,
  NOTE_A3, 0, 0, 0,
  
  NOTE_B3, NOTE_A4, NOTE_A4,
  NOTE_A4, NOTE_G4, NOTE_F4,
  NOTE_E4, NOTE_C4, 0, NOTE_A3,
  NOTE_G3, 0, 0, 0,
  
  NOTE_E4, NOTE_C4, 0, NOTE_G3,
  0, 0, NOTE_GS3, 0,
  NOTE_A3, NOTE_F4, 0, NOTE_F4,
  NOTE_A3, 0, 0, 0,
  
  NOTE_B3, NOTE_F4, 0, NOTE_F4,
  NOTE_F4, NOTE_E4, NOTE_D4,
  NOTE_C4, NOTE_E3, 0, NOTE_E3,
  NOTE_C3, 0, 0, 0,
};

PROGMEM const float LENGTH1[] = {
  // Page 1
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,

  // Page 2
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  // Page 3
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,

    // Page 4
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,

  // Page 5
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,

  // Page 6
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,

  // Page 7
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,

  // Page 8
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  // Page 9
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
};

int size1 = sizeof(NOTES1)/sizeof(int);





PROGMEM const int NOTES2[] = {
  // Page 1
  NOTE_D3, NOTE_D3, 0, NOTE_D3,
  0, NOTE_D3, NOTE_D3, 0,
  0, 0, 0, 0,
  NOTE_G3, 0, 0, 0,
  
  NOTE_G3, 0, 0, NOTE_E3,
  0, 0, NOTE_C3, 0,
  0, NOTE_F3, 0, NOTE_G3,
  0, NOTE_FS3, NOTE_F3, 0,
  
  NOTE_E3, NOTE_C4, NOTE_E4,
  NOTE_F4, 0, NOTE_D4, NOTE_E4,
  0, NOTE_C4, 0, NOTE_A3,
  NOTE_B3, NOTE_G3, 0, 0,
  
  NOTE_G3, 0, 0, NOTE_E3,
  0, 0, NOTE_C3, 0,
  0, NOTE_F3, 0, NOTE_G3,
  0, NOTE_FS3, NOTE_F3, 0,
  
  NOTE_E3, NOTE_C4, NOTE_E4,
  NOTE_F4, 0, NOTE_D4, NOTE_E4,
  0, NOTE_C4, 0, NOTE_A3,
  NOTE_B3, NOTE_G3, 0, 0,
  
  // Page 2
  NOTE_C3, 0, 0, NOTE_G3,
  0, 0, NOTE_C4, 0,
  NOTE_F3, 0, 0, NOTE_C4,
  NOTE_C4, 0, NOTE_F3, 0,
  
  NOTE_C3, 0, 0, NOTE_E3,
  0, 0, NOTE_G3, NOTE_C4,
  0, 0, 0, 0,
  0, 0, NOTE_G3, 0,

  NOTE_C3, 0, 0, NOTE_G3,
  0, 0, NOTE_C4, 0,
  NOTE_F3, 0, 0, NOTE_C4,
  NOTE_C4, 0, NOTE_F3, 0, 

  NOTE_C3, 0, NOTE_GS3, 0,
  0, NOTE_AS4, 0, 0,
  NOTE_C4, 0, 0, NOTE_G3,
  NOTE_G3, 0, NOTE_C3, 0,
  
  // Page 3
  NOTE_C3, 0, 0, NOTE_G3,
  0, 0, NOTE_C4, 0,
  NOTE_F3, 0, 0, NOTE_C4,
  NOTE_C4, 0, NOTE_F3, 0,
  
  NOTE_C3, 0, 0, NOTE_E3,
  0, 0, NOTE_G3, NOTE_C4,
  0, 0, 0, 0,
  0, 0, NOTE_G3, 0,

  NOTE_C3, 0, 0, NOTE_G3,
  0, 0, NOTE_C4, 0,
  NOTE_F3, 0, 0, NOTE_C4,
  NOTE_C4, 0, NOTE_F3, 0, 

  NOTE_C3, 0, NOTE_GS3, 0,
  0, NOTE_AS4, 0, 0,
  NOTE_C4, 0, 0, NOTE_G3,
  NOTE_G3, 0, NOTE_C3, 0,
  
  // Page 4
  NOTE_GS2, 0, 0, NOTE_DS3,
  0, 0, NOTE_GS3, 0,
  NOTE_G3, 0, 0, NOTE_C3,
  0, 0, NOTE_G2, 0,
  
  NOTE_GS2, 0, 0, NOTE_DS3,
  0, 0, NOTE_GS3, 0,
  NOTE_G3, 0, 0, NOTE_C3,
  0, 0, NOTE_G2, 0,
  
  NOTE_GS2, 0, 0, NOTE_DS3,
  0, 0, NOTE_GS3, 0,
  NOTE_G3, 0, 0, NOTE_C3,
  0, 0, NOTE_G2, 0,
  
  NOTE_D3, NOTE_D3, 0, NOTE_D3,
  0, NOTE_D3, NOTE_D3, 0,
  0, 0, 0, 0,
  NOTE_G3, 0, 0, 0,
  
  // Page 5
  NOTE_G3, 0, 0, NOTE_E3,
  0, 0, NOTE_C3, 0,
  0, NOTE_F3, 0, NOTE_G3,
  0, NOTE_AS3, NOTE_F3, 0,
  
  NOTE_E3, NOTE_C4, NOTE_E4,
  NOTE_F4, 0, NOTE_D4, NOTE_E4,
  0, NOTE_C4, 0, NOTE_A4,
  NOTE_B4, NOTE_G3, 0, 0,
  
  NOTE_G3, 0, 0, NOTE_E3,
  0, 0, NOTE_C3, 0,
  0, NOTE_F3, 0, NOTE_G3,
  0, NOTE_AS3, NOTE_F3, 0,
  
  NOTE_E3, NOTE_C4, NOTE_E4,
  NOTE_F4, 0, NOTE_D4, NOTE_E4,
  0, NOTE_C4, 0, NOTE_A4,
  NOTE_B4, NOTE_G3, 0, 0,
  
  // Page 6
  NOTE_C3, 0, 0, NOTE_FS3,
  NOTE_G3, 0, NOTE_C4, 0,
  NOTE_F3, 0, NOTE_F3, 0,
  NOTE_C4, NOTE_C4, NOTE_F3, 0,
  
  NOTE_D3, 0, 0, NOTE_F3,
  NOTE_G3, 0, NOTE_B4, 0,
  NOTE_G3, 0, NOTE_G3, 0,
  NOTE_C4, NOTE_C4, NOTE_G3, 0,
  
  NOTE_C3, 0, 0, NOTE_FS3,
  NOTE_G3, 0, NOTE_C4, 0,
  NOTE_F3, 0, NOTE_F3, 0,
  NOTE_C4, NOTE_C4, NOTE_F3, 0,
  
  NOTE_G3, 0, 0, NOTE_G3,
  NOTE_G3, NOTE_A4, NOTE_B4,
  NOTE_C4, 0, NOTE_G3, 0,
  NOTE_C3, 0, 0, 0,
  
  // Page 7
  NOTE_C3, 0, 0, NOTE_FS3,
  NOTE_G3, 0, NOTE_C4, 0,
  NOTE_F3, 0, NOTE_F3, 0,
  NOTE_C4, NOTE_C4, NOTE_F3, 0,
  
  NOTE_D3, 0, 0, NOTE_F3,
  NOTE_G3, 0, NOTE_B4, 0,
  NOTE_G3, 0, NOTE_G3, 0,
  NOTE_C4, NOTE_C4, NOTE_G3, 0,
  
  NOTE_C3, 0, 0, NOTE_FS3,
  NOTE_G3, 0, NOTE_C4, 0,
  NOTE_F3, 0, NOTE_F3, 0,
  NOTE_C4, NOTE_C4, NOTE_F3, 0,
  
  NOTE_G3, 0, 0, NOTE_G3,
  NOTE_G3, NOTE_A4, NOTE_B4,
  NOTE_C4, 0, NOTE_G3, 0,
  NOTE_C3, 0, 0, 0,
  
  // Page 8
  NOTE_GS2, 0, 0, NOTE_DS3,
  0, 0, NOTE_GS3, 0,
  NOTE_G3, 0, 0, NOTE_C3,
  0, 0, NOTE_G2, 0,
  
  NOTE_GS2, 0, 0, NOTE_DS3,
  0, 0, NOTE_GS3, 0,
  NOTE_G3, 0, 0, NOTE_C3,
  0, 0, NOTE_G2, 0,
  
  NOTE_GS2, 0, 0, NOTE_DS3,
  0, 0, NOTE_GS3, 0,
  NOTE_G3, 0, 0, NOTE_C3,
  0, 0, NOTE_G2, 0,
  
  NOTE_D3, NOTE_D3, 0, NOTE_D3,
  0, NOTE_D3, NOTE_D3, 0,
  0, 0, 0, 0,
  NOTE_G3, 0, 0, 0,
  
  // Page 9
  NOTE_C3, 0, 0, NOTE_FS3,
  NOTE_G3, 0, NOTE_C4, 0,
  NOTE_F3, 0, NOTE_F3, 0,
  NOTE_C4, NOTE_C4, NOTE_F3, 0,
  
  NOTE_D3, 0, 0, NOTE_F3,
  NOTE_G3, 0, NOTE_B4, 0,
  NOTE_G3, 0, NOTE_G3, 0,
  NOTE_C4, NOTE_C4, NOTE_G3, 0,
  
  NOTE_C3, 0, 0, NOTE_FS3,
  NOTE_G3, 0, NOTE_C4, 0,
  NOTE_F3, 0, NOTE_F3, 0,
  NOTE_C4, NOTE_C4, NOTE_F3, 0,
  
  NOTE_G3, 0, 0, NOTE_G3,
  NOTE_G3, NOTE_A4, NOTE_B4,
  NOTE_C4, 0, NOTE_G3, 0,
  NOTE_C3, 0, 0, 0,
};

PROGMEM const float LENGTH2[] = {
  // Page 1
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  // Page 2
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,

  // Page 3
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  // Page 4
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  // Page 5
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  // Page 6
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  // Page 7
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  // Page 8
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  // Page 9
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  
  1, 1, 1, 1,
  4./3, 4./3, 4./3,
  1, 1, 1, 1,
  1, 1, 1, 1,
};

int size2 = sizeof(NOTES2)/sizeof(int);
