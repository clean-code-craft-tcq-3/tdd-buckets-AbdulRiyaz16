#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "currentMeasurements.h"


/******************************************************************************************************
FEATURE 1 : The return Value for {4,5} from getRange should be 1 .
TDD_STEP1 : Write the Test Code(Unit Test) without having the implementation of a function being called .
Actions : Write only test code (Unit Test).
Result : FAILED .
Reason : There is no function defined present
********************************************************************************************************/
/*
int currentSamples[] = {4,5};
REQUIRE(getRange(currentSamples) == 1);
*/
/*****************************************************************************************************
FEATURE 1 : The return Value for {4,5} from getRange should be 1 .
TDD_STEP2 : write enough code so that unit test code can compile and execute, but will not PASS .
Actions : Define a function but not implementation , And Tell Somehow the function is not implemented by .
1.  Forward declaration .
2.  Throws Exception .
3.  If language has some constraints return a value which tells function is not implemented .
Result : FAILED
Reason : Function is defined , but there is no implementation for the called function and function is made to return 0 always  
*****************************************************************************************************/

/*
int getRange(int *currentSamples)
{
  return 0;
}
*/

/*****************************************************************************************************
FEATURE 1 : The return Value for {4,5} from getRange should be 1 .
TDD_STEP3 : write enough code so that the unit Test will pass.
Actions : Define a function and implementation just enough to pass the current testcase.
Result : PASSED .
Reason : Implementation is just enough to pass current test , but lets see how our code is stable when we extend the testcases
********************************************************************************************************/

TEST_CASE("Get the range distribution details for scenario 1") {
    int currentSamples[] = {4,5};
    REQUIRE(getRange(currentSamples) == 1);
}
