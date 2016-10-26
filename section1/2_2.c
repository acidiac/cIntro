/*
    Introduction to C programming
    Section1 (Overview and Fundamentals)
    2_2 Declaring Variables 
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
    What are variables? << Link >>
*/

#include <stdio.h>  

/*
    Before we jump into the syntax for declaring variables its important to understand what varibales are. Variables can be best imagined 
    as some sort of containers where we can store resources (data and definitions) required within our code. Just like containers variables 
    have labels which gives us an idea about what are we storing. So it is adviced to use labels (variable names) which are not ambiguous. 
    In addition to the labels we also need to know what excatly is it that we are storing. Everything stored in memory with certain type we
    refer to them as datatypes and each datatype is assigned necessary memory depending on its expected size. So as we can see it is 
    very important to have good label and know what we will be storing to make sure that our programs are easily understood and work efficiently.
*/    

int main ( void ){
    int age;    // Declaring a variable with label "age" (which stores age of a person) and int is the datatype
    age = 34;   // Initializing the variable with value 34.
    printf("My age is %d\n",age);
    /*
        printf essentially used for formatted printing as oppose to functions [ puts() or putchar()] which do not format the output.__arg
        The formatting can be done depending on the datatype of the variable. So here the variable "age" is a decimal value and for that we use 
        %d, which is a placeholder for the value of decimal datatype. The variables and values declared after the statement in quotes replace placeholders 
        in sequence.
    */

    // Read more about datatypes << link >>
    // Read more about the print formatting in C  << link >>
}

void maxValues() {
    
}