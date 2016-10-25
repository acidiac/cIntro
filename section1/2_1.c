/*
    Introduction to C programming
    Section1 (Overview and Fundamentals)
    2_1 Preprocessor Directive 
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

/*
    We have previously used the header files in our programs for adding more functionality to our programs. 
    These inclusions were declared at the top of the file so that compiler can include them before it went on with 
    compiling our file and would not throw errors for the functions and references which were from the header files.

    This very same feature can also be used to extend our codes in different files thereby making it more managable 
    for us to share the resources across the codebase spread over entire project in various files. We will see here how 
    to include our own files in the header and also make use of define which enable us to declare values
    that we intend to use in the program. Very similar to constants.

*/

#include <stdio.h>          // the header files which are from the c standard library are included with <standardlibrary.h>
#include "myheader.h"   // Our own files need to be included within quotes

#define MONTH_IN_YEAR 12


int main ( void ){
    int myAge = age;
    printf("I have lived for %d months\n", myAge*MONTH_IN_YEAR);
    
    return 0;
}

