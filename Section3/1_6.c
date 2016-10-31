/*
    Introduction to C programming
    Section3 Pointers and Memmory Management
    1_6 Pointers and Side Effects
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 31 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <stdio.h>
#include <stdlib.h>

// Function declarations 
void up(int *x, int *y);
void down(int *x, int *y);
void right(int *x, int *y);
void left(int *x, int *y);
//void currPos(void);


int main(void) {
    int x = 10;
    int y = 10;
    int *adX = &x;
    int *adY = &y;
    up(adX, adY);
    printf("{x: %d, y:%d}\n", x, y);
    right(adX, adY);
    printf("{x: %d, y:%d}\n", x, y);
    down(adX, adY);
    printf("{x: %d, y:%d}\n", x, y);
    left(adX, adY);
    printf("{x: %d, y:%d}\n", x, y);
    return 0;
}

// Every move is 5 units in specified direction
void up(int *x, int *y) {
    *y += 5;
}

void down(int *x, int *y) {
    *y -= 5;
}

void right(int *x, int *y) {
    *x += 5;
}

void left(int *x, int *y) {
    *x -= 5;
}

/*
void currPos(void){
    printf("{x: %d, y:%d}\n", x, y);
  
}
*/

