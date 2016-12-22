/*
    author: Amit Chanchal
    Series: Introduction to C
    Month/Year: Nov/2016
    Subject: Pointers 1
    Using pointers, Basic operations
*/
#include <stdio.h>
int doubleValue(int num);
int doubleValueAt(int *num);

int main(int argc, char* argv[]){
    int number = 23;
    int *numPointer;
    numPointer = &number;
    printf("Example to demonstrate basic uses of pointers\n");
    // first we are going pass arguments by value
    printf("Doubling by value, %d\n", doubleValue(number));
    printf("original number %d\n", number);
    // Now we will pass by argument by address
    printf("Doubling by address reference %d\n", doubleValueAt(numPointer));
    printf("original number %d\n", number);
    return 0;
}

int doubleValue(int num){
    return num*2;
}

int doubleValueAt(int *num){
    return (*num)*2;

}