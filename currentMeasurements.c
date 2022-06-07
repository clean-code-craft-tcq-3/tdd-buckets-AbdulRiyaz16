#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "currentMeasurements.h"

int *sortArray(int *inputArray, int size)
{
    for (int i = 0; i < size; i++)
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

int getRange(int *currentSamples)
{
  int length =(int)ARRAYLENGTH(currentSamples);
  currentSamples=sortArray(currentSamples,length);
  return 0;
}
