#include<stdio.h>

int main( int argc, char* argv[]){
    if (argc == 1){
        printf("Please provide command line arguments\nFor help use h\n ");
        return 0;
    } else if (argc < 3 || argc > 3){
        printf("Too few arguments\nFor help use h\n ");
        return 0;
    } 

    if (argv[1]== 'h'){
        printf(" pass two number followed by the operation, below are the list of operations\n");
        printf("add for addition\n ");
        printf("sub for Subtraction\n");
        printf("mul for Multiplication\n");
        printf("------------------------------------------------------------\n");
    } else {
           int x = (int)argv[1];
        int y = (int)argv[2];
        printf("sum of the numbers: %d", x+y);
    }

    return 0;
}