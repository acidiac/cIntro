/*
    Singly linked list implementation
    Author: Amit Chanchal
    Date: 21-Nov-2016
*/

#include<stdio.h>
#include<stdlib.h>

// definition of the structure with data to hold our value and link to store the pointer to next node
struct node_proto{
    int data;
    struct* node link;
} ;

void displayNodes(struct node* p, int option);
int selectDisplayOption(void);
struct node* insertNode(struct node* p, int n);

int main (int argc, char* argv[]){
    int n;
    int x;
    int displayOption;
    // declaring head node set to null
    struct node* head = NULL;
    printf("How many nodes do you want to create?\n");
    scanf("%d", &n);
    while(n-- >0){
        printf("Add a integer to be stored in the node: \n ");
        scanf("%d", &x);
        head = insertNode(head, x);
    }
    printf("All the node added!\n");
    printf("-----------------------------------------------------\n\n");
    displayOption = selectDisplayOption( );
    displayNodes(head, displayOption);
    return 0;
}

struct node* insertNode(struct node* p, int n){
    struct node* temp;
    if (p == NULL){
        p = (struct node*) malloc(sizeof(struct node));
        if (p == NULL){
            printf("Error in creating node, (maybe out of memory!)\n");
            return 0;
        }
        p -> data = n;
        // if the first then it points to itself
        p -> link = p;
    } else {
        // if not the first node then we will have to traverse the chain to find the final node with null pointer as link
        temp = p;
    }

}

void displayNodes(struct node* p, int option){


}

int selectDisplayOption(void){
    int displayOption;
    printf("please choose a mode for displaying the nodes.... \n");
    printf("1: Simple Display\n");
    printf("2: Detailed\n");
    printf("Enter your option:\n");
    scanf("%d", &displayOption);
    if(displayOption == 1 || displayOption == 2){
        return displayOption;
    } else {
        printf("Your have selected an invalid option! \nTry again!");
        selectDisplayOption();
    }
}



