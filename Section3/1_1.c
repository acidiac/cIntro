/*
    Introduction to C programming
    Section3 Pointers and Memmory Management
    1_1 Pointers 
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    // Declarations
    int myNumber = 25;  // A int variable declaration
    int *myNumberPtr ;      // A pointer declaration

    myNumberPtr = &myNumber;        // we are storing address of myNumber in myNumberAddress
    printf("The address of variable myNumber is %x and its value is %d\n", myNumberPtr, *myNumberPtr);
    // Above we are using the pointer to get the value by derefrencing it using the "*" operator
    return 0;
}