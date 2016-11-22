#include<stdio.h>

int main(void){
    char name[10] = "A.Chanchal";
    char* namePtr;
    namePtr = &name[0];
    printf("Pointer to first item [%p] is same as name of array [%p]\n", namePtr, name);
    return 0;
}