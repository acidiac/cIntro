/*
    author: Amit Chanchal
    Series: Introduction to C
    Month/Year: Nov/2016
    Subject: Pointers 1
    demostrates concepts such as Declaration, address-of, dereferencing and datatypes
*/

#include<stdio.h>
#include<stdlib.h>

int main( ){
    int x = 23; 
    /*declaring a pointer variable with the '*', this pointer is of integer type which means it points to the block in memory 
        which can hold a integer type data. 
    */
    int *pointerToX;
    /*
        pointerToX that we just declared has no assignment and does not point to anything. We can make it point to variable x 
        by using the keyword '&'
    */
    pointerToX = &x;
    // Printing out the pointer value
    printf("Pointer variable is %p\n", pointerToX);
    //Dereferencing a pointer
    printf("Value at address [%p] is %d \n ", pointerToX, *pointerToX);
    return 0;
}
