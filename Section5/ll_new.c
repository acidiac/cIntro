/* 
    Program is an implementation of sinlgy linked list 
    Linked list for storing "N" number of coordinates (x,y) of  points 
    
    This particular implementation uses method to insert to the front of the list.
    .................................................................................................................................
    Datatypes:
        coords  -   is struct which stores two integers 'x' and 'y' as coordinates for the point
        node    -   is datatype which store data ( coords ) and link to next node 
        list        -   is a pointer to custom datatype node
    .................................................................................................................................
    Functions:
        main --  
            Parameters : int argc, char*argv[]
            Entry point to the program

        insertNodes --   
            parameters:  int count
            (total number of points to be added) returns pointer to the head node
        
        displayNodes --
            Parameters: list or node*
            takes pointer reference of the head node and traverses through the list to display data contained in each node (point)

        distanceBtwPoints ----  
            Parameters [list headPtr] , list is node*
            Traverses through the list and computes distance between all the points to return the cumulative distance as double
        
        numPoints --
            Parameters: list or node*
            takes pointer reference of the head node and traverses through the list to return total number of nodes in the list as integer
*/

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

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

// Defining custom type for node* type as list
typedef node *list;

// Function prototypes
int numPoints(list headPtr);
double distanceBtwPoints(list headPtr);
void displayNodes(list headPtr);
list insertNodes(int count);


int main(int argc, char* argv[]){
    // declaration a variable to hold value of the coordinates,
    // We can also alternately use coord pointer to make it more memory efficient
    list head, temp;
    int count;
    printf("How many point do you wish to add to the list? (integer):\n");
    scanf("%d", &count);
    head = insertNodes(count);
    //Displaying the list contents 
    printf("- - - - - - - - - - - - - - - - - - - -- - - - - -- - - - - - -- - - - - - - - - - -- -  -- - \n");
    printf("Total number of nodes in the list: %d\n", numPoints(head));
    printf("Details of the points added to the list.\n");
    displayNodes(head);
    printf("Total cumulative distance between the points: %.2lf\n",distanceBtwPoints(head));
    printf("- - - - - - - - - - - - - - - - - - - -- - - - - -- - - - - - -- - - - - - - - - - -- -  -- - \n");
    
    return 0;
}


int numPoints(list headPtr){
    list temp;
    int pointCount = 0;
    temp = headPtr;
    while(temp != NULL){
        temp = temp->link;
        pointCount++;
    }
    return pointCount;
}


double distanceBtwPoints(list headPtr){
    list temp;
    temp = headPtr;
    double dist;
    int tempx = 0;
    int tempy = 0;
    while(temp!=NULL){
        if(tempx != 0){
            // double pow(double x, double y) Returns x raised to the power of y.
            //double sqrt(double x)
            double diffx, diffy;
            diffx = (double) (temp->data.x - tempx) ;
            diffy = (double) (temp->data.y - tempy);
            dist += sqrt(pow(diffx, 2.0)+pow(diffy, 2.0));
        } 
        tempx = temp->data.x;
        tempy = temp->data.y;
		temp = temp->link;
	}
    return dist;
}


void displayNodes(list headPtr){
    list temp;
    temp = headPtr;
	while(temp!=NULL){
		printf("\t(X:%d, Y:%d)\n", temp->data.x, temp->data.y);
		temp = temp->link;
	}
}



list insertNodes(int count){
    coords point;
    list head, temp;
    printf("You are about to add %d points...\n\n", count);
    while (count > 0){
        printf("- - - - - - - - - - - - - - - - - - - -- - Adding Point - - - -- - - - - - -- - - - - - - - - - -- -  -- - \n");
        printf("Value for x (ingeter):\n");
        scanf("%d", &point.x);
        printf("Valvue for y (Integer):\n");
        scanf("%d", &point.y);
        //printf("- - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - -- - - -- - - - - - -- - - - - - - - - - -- -  -- - \n");
        //printf("point you are adding is (%d, %d)\n", point.x, point.y);
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
    printf("\nAll points added operation complete!\n\n");
    return head;
}