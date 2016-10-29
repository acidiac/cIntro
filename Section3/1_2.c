/*
    Introduction to C programming
    Section3 Pointers and Memmory Management
    1_1 Pointers Declarations
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char *name;
    char newName;
    name = &newName;    // Address of the new name variable
    printf("Please tell us your name:\n");
    scanf("%c", name);      // Storing single character at the memory address of newName ==  name (pointer variable)
    printf("character that you entered is %c \n", newName);
    return 0 ;

}