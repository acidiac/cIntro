/*
    Introduction to C programming
    Section1 (Overview and Fundamentals)
    3_2 Basic Strings input output
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <stdio.h>
#include <stdlib.h>


int main (void) {
    // Here we are defining a char array which can contain 20 elements and assign a string "amit chanchal" to it.
    char myName[20] ; 
    printf("What is your name?\n");
    scanf("%s", &myName);
    printf("you are %s!\n", myName);    // %s is used for formatting string outputs
    return 0;
}