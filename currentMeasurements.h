#ifndef CURRENTMEASUREMENTS_H
#define CURRENTMEASUREMENTS_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ARRAYLENGTH(x)  (sizeof(x) / sizeof((x)[0]))

int *sortArray(int *inputArray, int size);
int getRange(int *currentSamples);
int isSamplesConsecutive(int currentNumber, int nextNumber);




#endif
