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
} node;

typedef node *list;

void displayNodes(list refer){
    list temp;
    temp = refer;
	while(temp!=NULL){
		printf("(X:%d, Y:%d)\n", temp->data.x, temp->data.y);
		temp = temp->link;
	}
}


list insertNodes(int count){
    coords point;
    list head, temp;
    while (count > 0){
        printf("Add x value for the point:\n");
        scanf("%d", &point.x);
        printf("Add y value for the point:\n");
        scanf("%d", &point.y);
        printf("point you are adding is (%d, %d)\n", point.x, point.y);
        temp = (list) malloc(sizeof(node));
        if (temp != NULL){
            temp->data = point;
		    temp->link = head;
		    head = temp;
            count--;
        } else {
            break;
        }
    }
    return head;
}

int main(int argc, char* argv[]){
    // declaration a variable to hold value of the coordinates,
    // We can also alternately use coord pointer to make it more memory efficient
    list head, temp;
    int count;
    printf("How many point do you wish to add to the list? (integer):\n");
    scanf("%d", &count);
    head = insertNodes(count);
    //READING THE LIST
    displayNodes(head);
	
    return 0;
}
