/*
    Introduction to C programming
    Section3 Pointers and Memmory Management
    1_7 NULL Pointers
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 31 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int* aPtr = 0;
    //int a = 12;
   // aPtr = &a;
    if (aPtr == NULL){
        printf("%p pointer address\n", aPtr);
    } else {
        printf("%p pointer address\n", aPtr);
    }
    printf("the value %d", *aPtr); // when we try to dereference null pointer we get a segementation error
    
    return EXIT_SUCCESS;
}