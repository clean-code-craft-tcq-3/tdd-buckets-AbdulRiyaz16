#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "currentMeasurements.h"

int *sortArray(int *inputArray, int length)
{
    int temp = 0;    
    for (int i = 0; i < length; i++)
    {     
        for (int j = i+1; j < length; j++)
        {     
           if(inputArray[i] > inputArray[j])
           {    
               temp = inputArray[i];    
               inputArray[i] = inputArray[j];    
               inputArray[j] = temp;    
           }     
        }     
    } 
    return inputArray;
}

int isSamplesConsecutive(int currentNumber, int nextNumber)
{
    int sampleDifference = nextNumber - currentNumber ;
    if (sampleDifference == 0 || sampleDifference == 1)
        return 1;
    return 0 ;
}

int getRange(int *currentSamples)
{
  int length =(int)ARRAYLENGTH(currentSamples);
  int numberOfConsecutiveNumbers=1, numberOfRanges=0, firstSample=currentSamples[0], LastSample = currentSamples[0];
  currentSamples=sortArray(currentSamples,length);
  
    for (int arrayIndex=0; arrayIndex<length; arrayIndex++){
        if (isSamplesConsecutive(currentSamples[arrayIndex], currentSamples[arrayIndex+1]))
        {
            numberOfConsecutiveNumbers++;
            LastSample = currentSamples[arrayIndex+1];
        }
        else
        {
            numberOfRanges++;
        
        }
    }
  return numberOfRanges;
}
