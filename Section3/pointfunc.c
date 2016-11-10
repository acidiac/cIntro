#include <stdio.h>
#include <stdlib.h>

/*
    Communicating through pointers
*/

int func1(int *sharednumber);
int fun2(int *sharednumber);


int main (void) {
    int num = 50;
    int *numptr;
    numptr = &num;
    printf("We have changed the memory to %d", func1(numptr));
    return 0;
}

int func1( int *num){
    return *num += 10;
}