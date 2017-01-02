/*
    author: Amit Chanchal
    Series: Introduction to C
    Month/Year: Nov/2016
    Subject: Pointers 1
    Using pointers, Basic operations
*/

#include <stdio.h>
#include <stdlib.h>

int halfValue(int *intPtr){
    if((*intPtr%2)==0){
        *intPtr = *intPtr/2;
        return 1;
    }else{
        return 0;
    }
}

int main (int argc, char* argv[]){
    int localVar = 34;
    int *ptr;
    int check;
    ptr = &localVar;
    check = halfValue(ptr);
    if(check==1){
        printf("value has been successfully halved to %d\n", localVar);
    } else {
        printf("value is not divisible by 2, couldn't complete the operation!\n'");
    }
    return 0;
}