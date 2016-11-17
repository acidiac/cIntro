/* 
    more madness with pointers, Passing them around function and making things go a bit nutty overall
*/

#include <stdio.h>
#include <stdlib.h>


void displayArrayContent(int *arrayPointer, int len);
int main (void){
    int age[5] = {1,2,3,4,5};
    int length = sizeof(age)/sizeof(int);
    printf("is this the address to the array pointer? %p", age);
    printf("length of the array is %d", length);
    return 0;

}

void displayArrayContent(int *arrayPointer, int len){

}