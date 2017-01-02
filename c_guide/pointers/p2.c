/*
    author: Amit Chanchal
    Series: Introduction to C
    Month/Year: Nov/2016
    Subject: Pointers 1
    Using pointers, Basic operations
*/
#include <stdio.h>
/*
    Functions and Pointers

    Pointers provide us with a handy means to achieve two important things which otherwise would be impossible in the c language
    1) Way to manipulate data which is not local to the function ( not in the scope of the function)
    2) Find a way around limitation of single return value from the function

*/
void addTen(int *ptrToInt ){
    *ptrToInt += 10;
    printf("Added 10 to the pointer value");
}
int main (int argc, char* argv[]){
   int localVar = 23;
   int* ptr ; 
   ptr = &localVar;
   addTen(ptr);
   printf("Ten added to the local variable localVar %d \n", localVar);
   return 0;
}