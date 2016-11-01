/*
    Bitwise Operators in 'C'
    Amit Chanchal
    amit.chanchal@hotmail.com 
    31 October 2016

*/

#include <stdio.h>

int main (void){
    // << and >> operators shifts n integer by given number of bits 
    int x = 7;
    
    printf("shifted value %d\n", x);
    x = x << 1;
    printf("shifted value %d\n", x);
    x = x << 1;
    printf("shifted value %d\n", x);
    x = x << 1;
    printf("shifted value %d\n", x);
    x = x << 1;
    printf("shifted value %d\n", x);

    return 0;

}