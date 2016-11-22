#include<stdio.h>

void addTen (int* val){  *val += 10; }

int main(void){
    int x = 10;
    printf("value of x: %d \n", x);
    addTen(&x); // calling function by passing reference 
    printf("value of x: %d \n", x);
    return 0;
}