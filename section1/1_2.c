/*
    Introduction to C programming
    Section1 (Overview and Fundamentals)
    1_2 Input and Output
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
    We will be dealing with c11 mostly in this set of codes.
    Before we get further it would be interesting for you to get some perspective on the language. I will leave some useful links below
    Evolution of C programming Language << Link >>

*/
 
#include <stdio.h>          // standard input-output library with 'printf' function which prints out to the console
#include <stdlib.h>         // 

// every c program must have a main function, which is also the main entry point to the program
// void means that the function does not return anything although we still return a integer due to the reasons discussed in the link below
// return from main function << Link >>
int main(void){
    int myNumber;
    printf("Please enter a number: \n");
    scanf("%d", &myNumber);
    printf("the number you entered was %d\n", myNumber);

    // We will see this in later section. I got a bit carried away..
    printf("IGNORE BELOW THIS,WE WILL SEE THIS AGAIN IN CONTROL FLOW\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    if (myNumber%2 == 0){
        printf("The number you entered is %d, it is a even number!\n", myNumber);
        printf("Who would have thought you would pick an even number\n");
    } else {
        printf("The number you entered is %d, it is a odd number!\n", myNumber);
        printf("Odd number = death, not really!\n");
    }
    
    return 0;
}

// Links on Compiling and running your C program << link >>