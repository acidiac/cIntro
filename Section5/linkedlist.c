/*
* @Author: amit chanchal
* @Date:   2016-12-03 19:50:37
* @Last Modified by:   amit
* @Last Modified time: 2016-12-04 02:05:53
* 
* Implementing linked list in c
* - this can be seen essentially as three step process
* - 1: Create the nodes
* - 2: stores the data in the node
* - 3: link the node
*/
#include <stdio.h>
#include <stdlib.h>

// Declaring the structure for the node as a struct
typedef struct nodeType{
	int data; // this holds the dataq
	struct nodeType *link; // self referencing
} node;

typedef node *list;


char getChoice(void){
	char response;
	printf("You are about to add data to node, choose (n) if you are done\n");
	scanf("%c", &response);
	return response;
}


int main() {

	// Variables list, head, 

	list head, temp;
	char choice;
	int n, x;
	head = NULL;
    
	
	char ch;
	ch = getChoice();
	while (ch != 'n'){
		printf("Add data to node\n");
		scanf("%d", &n);
		temp = (list) malloc(sizeof(node));
		temp->data = n;
		temp->link = head;
		head = temp;
		ch = getChoice();
	}

	
	//READING THE LIST
	temp = head;
	while(temp!=NULL){
		printf("%d", temp->data);
		temp = temp->link;
	}


    return 0;
}