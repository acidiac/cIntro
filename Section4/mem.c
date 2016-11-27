/* Simple dynamic memory allocation*/

#include<stdio.h>
#include<stdlib.h>
//#include<malloc.h>

int main(int argc, char* argv[]) {
    int* p;
    int i=0;
    /*
        we want to allocate space for 10 ints hence we get use 
        malloc and allocate memory for 10 ints by malloc(10* sizeof(int)) and assign it to a 
        int pointer p 
        sizeof is a good way to assign memory as the size might vary depending on the system 
    */
    p = (int*)(malloc(10*sizeof(int)));
    /*
        if memory is available then malloc will return pointer to the first location in the block assigned
        if memory isn't available then malloc will return a null pointer which is handy for us to check before 
        we do anything further
    */
    if(!p) {
        printf("pointer to allocated block: %p\n", p);

        for(i; i<9;i++){
        *(p+i)=i;
        }
    }
    printf("@%p : %d\n", p,*p);
    printf("@%p: %d\n", p+1,*(p+1));
    free(p);
    printf("p after freeing allocated memory %p\n", p);
    return 0;

}