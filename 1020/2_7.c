/*
    Bitwise Operators in 'C'
    Amit Chanchal
    amit.chanchal@hotmail.com 
    31 October 2016

*/
#include <stdio.h>
#include <stdlib.h>
#define BIT_MAX  128

void conBinary8(int number);
void shiftThis (void);


int main (void){
    int inputNumber;
    printf("Please provide a number less than 128:");
    scanf("%d", &inputNumber);
    conBinary8(inputNumber);
    printf("\n");
    return 0;
}

void conBinary8(int number) {
    // Prints the binry 8 bit equivalent in binary
    int currentBitValue = BIT_MAX;
    for (int i = 0 ; i < 8 ; i++){
        int remain = number - currentBitValue;
        if (remain >= 0 && number <  BIT_MAX){
            printf("1");
            number = remain;
        } else if (remain < 0 && number <  BIT_MAX){
            printf("0");
        } else {
            printf("Out of Range!/n");
            break;
        }
        currentBitValue = currentBitValue >> 1;
    }
    
}

/*
void printBinary(int binaryArray[]) {
    int length = sizeof(binaryArray)/ sizeof(int); // Length of the array
    printf("| ");
    for (int i = 0; i < length; i++){
        printf("%d | ", binaryArray[i]);
    }
    printf("\n");
}
*/


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
   
}