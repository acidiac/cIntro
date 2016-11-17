/*Just having random fun with pointers */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[10][5];
    for (int i = 0; i < 10; i++){
        for (int j=0; j<5; j++){
            *(*(a+i)+j) = rand();
        }
        
    }

    for (int j = 0; j < 10; j++){
        printf("from brackets %d -- from pointers %d", a[j], *(a+j) );
    }
}