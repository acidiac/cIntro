/* Some kind of random linked list implementation*/
#include<stdio.h>
#include<stdlib.h>

// Defining structure to store 2D catersian coords as (x,y)
typedef struct {
    int x;
    int y;
} coords ;

// Defining type for the single node which has data as coords and link poniter
typedef struct nType {
    coords data;
    struct nType* link;
} nd;

int main(int argc, char* argv[]){
    // declaration a variable to hold value of the coordinates,
    // We can also alternately use coord pointer to make it more memory efficient
    coords point;
    nd* head, temp;
    int count;
    
    printf("How many point do you wish to add to the list? (integer):\n");
    scanf("%d", &count);
    while (count > 0){
        printf("Add x value for the point:\n");
        scanf("%d", &point.x);
        printf("Add y value for the point:\n");
        scanf("%d", &point.y);
        printf("point you are adding is (%d, %d)\n", point.x, point.y);
        count--;
    }
    
    return 0;
}
