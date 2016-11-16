#include <stdio.h>

int doubleThis(int numberToDouble);

int main (void){
    int userInput, output;
    printf("Please give me a integer to double:\n");
    scanf("%d", &userInput);
    output = doubleThis(userInput);
    printf("Your number has been doubled to %d\n", output);
    return 0;
}

int doubleThis(int numberToDouble){
    return numberToDouble*2;
}