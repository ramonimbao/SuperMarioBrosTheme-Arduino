#ifndef _MELODY_H_
#define _MELODY_H_

#include <avr/pgmspace.h>
#include <Tone.h>

extern const int NOTES1[];
extern const float LENGTH1[];

extern const int NOTES2[];
extern const float LENGTH2[];

int getNote(int voice, int n);
float getLength(int voice, int n);

extern int size1;
extern int size2;

#endif
