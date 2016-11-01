/*
    Bitwise Operators in 'C'
    Amit Chanchal
    amit.chanchal@hotmail.com 
    31 October 2016

*/
#include <stdio.h>
#include <stdlib.h>

#define 8BIT_MAX 128

int[] printBinary8(int number);
void printBinary(int binaryArray[]);
void shiftThis (void);


int main (void){
    int inputNumber;
    printf("Please provide a number less than 128:");
    scanf("%d", &inputNumber);
    printBinary(getBinary8(inputNumber));
    return 0;
}

int[] getBinary8(int number) {
    // Prints the binry 8 bit equivalent in binary
    int result[8];
    int currentBitValue = 8BIT_MAX;
    for (int i = 0 ; i < 8 ; i++){
        int remain = number - currentBitValue;
        if (remain >= 0 && number <  8BIT_MAX){
            result[i] = 1;
            number = remain;
        } else if (remain < 0 && number <  8BIT_MAX){
            result[i] = 0;
        } else {
            break;
        }
        currentBitValue = currentBitValue >> 1;
    }
    return result;
}


void printBinary(int binaryArray[]) {
    int length = sizeof(binaryArray)/ sizeof(int); // Length of the array
    printf("| ")
    for (int i = 0; i < length; i++){
        printf("%d | ", binaryArray[i]);
    }
    printf("\n");
    return 0;
}


void shiftThis (void){
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