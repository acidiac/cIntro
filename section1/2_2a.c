/*
    Introduction to C programming
    Section1 (Overview and Fundamentals)
    2_2a Datatype Sizes
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
    Extending the previuos example to find out the size of datatypes in memory
*/
#include <stdio.h>  
#include <limits.h>

int sectionBreak(void) {
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    return 0;
}

void dataSize(char dataType[ ]) {
    int size = sizeof(dataType);
    printf("Memory allocation for %s in your machine is %d bytes\n", dataType, size);
}

int main (void) {
    sectionBreak();
    printf("DATATYPE: CHAR\n");
    printf("The number of bits in a byte %d\n", CHAR_BIT);
    printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
    printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
    printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);
    printf("The minimum value of CHAR = %d\n", CHAR_MIN);
    printf("The maximum value of CHAR = %d\n", CHAR_MAX);
    dataSize("char");
    printf("Memory allocation for CHAR = %lu bytes\n", sizeof(char));
    sectionBreak();

    printf("DATATYPE: INT\n");
    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);
    printf("")
    printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
    printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 

    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);

    

    printf("The minimum value of LONG = %ld\n", LONG_MIN);
    printf("The maximum value of LONG = %ld\n", LONG_MAX);

    return 0;
}

