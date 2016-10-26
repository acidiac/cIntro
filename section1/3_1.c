/*
    Introduction to C programming
    Section1 (Overview and Fundamentals)
    3_1 Basic Strings in C
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <stdio.h>
#include <stdlib.h>

/*
    unlike other high level languages (Python, Go, Javascript..), C does not have string as a 
    standard datatype. In C, strings are collection of characters in a specified address in memory almost like an array
    which we will visit later section.  
*/

int main (void) {
    // Here we are defining a char array which can contain 20 elements and assign a string "amit chanchal" to it.
    char myName[20] = "amit chanchal"; 
    printf("my name is %s\n", myName);    // %s is used for formatting string outputs
    return 0;
}

