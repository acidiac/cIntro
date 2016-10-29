/*
    Introduction to C programming
    Section3 Pointers and Memmory Management
    1_3 Pointer Arithmetics, Arrays and pointers
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int scores[ ] = {12,11,13,6,8}; // declaring an array that we will use with pointers 
    int *arrPtr = scores;       // start of array address
    int lenScores = sizeof(scores)/ sizeof(int);

    for (int i=0; i<lenScores;i++){
        printf("address [%d]: value [%d]\n", arrPtr, *arrPtr);
        arrPtr++;
    }

    return 0;
}

