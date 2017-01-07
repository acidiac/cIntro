#include <stdio.h>


int foo (int a, int b){
    return a+b;
}

int bar (int c, int d){
    return c-d;
}
int main (int argc, char *argv[]){
    int (*func)(int,int) = &foo;
    
}