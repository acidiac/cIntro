/*
    Introduction to C programming
    Section3 Pointers and Memmory Management
    1_3 More Pointers and Array and Memory  
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int arr1[ ] = {2,5,54};
    char arr2[ ] = {"a", "b"};
    float arr3[ ] = {23.54, 1.12};
    int *intPtr = arr1;
    char *charPtr = arr2;
    float *floatPtr = arr3;

    printf("Is size of int and int Pointer same? [%d]\n", (sizeof(intPtr)==sizeof(int)));
    return 0;

}