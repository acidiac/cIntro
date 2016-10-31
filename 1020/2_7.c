/*
    Bitwise Operators in 'C'
    Amit Chanchal
    amit.chanchal@hotmail.com 
    31 October 2016

*/

#include <stdio.h>

int main (void){
    // << and >> operators shifts n integer by given number of bits 
    int x = 2;
    int y = x << 2;
    printf("initial value %d, shifted value %d\n", x, y);
    return 0;

}