
/*
    Introduction to C programming
    Section1 (Overview and Fundamentals)
    1_1 Customary Hello
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
    We will be dealing with c11 mostly in this set of codes.
    Before we get further it would be interesting for you to get some perspective on the language. I will leave some useful links below
    Evolution of C programming Language << Link >>

*/
// Header files which give us added functionality, stdio.h is standard input-output library with 'printf' function which prints out to the console
#include <stdio.h>
#include <stdlib.h>

// every c program must have a main function, which is also the main entry point to the program
// void means that the function does not return anything although we still return a integer due to the reasons discussed in the link below
// return from main function << Link >>
int main(void){
    printf("Hello!\n");         // prints 'Hello!' on the screen
    return EXIT_SUCCESS;
}

// Links on Compiling and running your C program << link >>