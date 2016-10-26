/*
    Introduction to C programming
    Section1 (Overview and Fundamentals)
    3_3 Strings Manipulation 
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>     //additional library for string manipulation

int main (void) {
    char str1[20]= "hello" ;
    char str2[20];

    // Copying a string with strcpy
    // syntax: strcpy(desnation, source);
    strcpy(str2, str1); // we are copying contents of str1 to str2
    printf("str1 = %s \t str2 = %s\n", str1, str2 ); // %t is for tab

    // comparing strings strcmp(string1, string2);
    int compare = strcmp(str1,str2);
    printf("%d\n", compare);
    if (compare==1){
        printf("are the strings same!");
    } else { 
        printf(" not same!\n"); 
    }

    // Length of string strlen(string);
    printf("length of the str1 is %d\n", strlen(str1));
    
    return 0;
}