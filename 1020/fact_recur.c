/* Factorial with recursive functions*/

#include <stdio.h>

long int factorial (int n);

int main(void){
    int userInput;
    long int output;
    printf("Interger you want factorial of:\n");
    scanf("%d", &userInput);
    output = factorial(userInput);
    printf("Factorial of  %d  is  %ld\n", userInput, output);
    return 0;
}

long int factorial (int n){
    if (n>=1)
        return n* factorial(n-1);
    else 
        return 1;  
}
