/*
    Introduction to C programming
    Section3 Pointers and Memmory Management
    1_5 Memory Management with Malloc
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 31 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <stdio.h>
#include <stdlib.h>


int main (void) {
    /*
        When we declare static array the way we have doen before the compiler allocate space for 10 integers in the memory, whether we use all 
        of the 10 spaces or not. This can result in some wastage. 
    */
    int staticArray [10];

    /*
        Alternately we can also declare arrays as pointer with a dynamic memory allocation which can be freed when we want thereby giving us 
        a much better control over how much our program uses memory
    */
    int i;
    int *dynamicArray = malloc(10 * sizeof(int)); // we are doing the same thing by dynamically allocating 10 integers sizes (10 * [size of one int in memory]) for the array
    for ( i = 0; i < 10; i++ ){
        dynamicArray[i] = 80;
        dynamicArray++;
        printf("address: %lu, value: %d\n", dynamicArray, *dynamicArray);
    }
    return 0;
}
