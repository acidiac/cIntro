#include <stdio.h>
#include <stdlib.h>

/*
    Communicating through pointers
*/

int main (void){
    int x = 12;
    int* xptr;  // creates a pointer variable
    xptr = &x; // using & operator we can assign address of variable x to xptr
    printf("The address of the pointer %p \n", xptr);
    printf("Value of variable at address %p is %d \n", xptr, *xptr);
    return 0;
}