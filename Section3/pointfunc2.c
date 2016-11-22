#include<stdio.h>
#include<stdlib.h>

int main(void){
    int xname[5] = {1,2,3,4,5};
    int* arrPtr;
    arrPtr = xname;
    for (int i = 0; i < 5; i++){
        printf("Pointer address:   %p \t and the value:  %d \n", arrPtr,*arrPtr);
        arrPtr++;
    }
    return 0;
}