/*
    basic prototype for data definition structual organization and operations on the network datatype 
    Custom defined datatype with structures which allows us to do the following:
    1. have a structure for storing data as well as the node information
    2. have a way to add new node with connection which we can define as initialization/declaration or later 
    3. Have a way bring a full network into the older ones by assigning the head node which might belong to an existing network
    4. Way to traverse the network
    5. have a way to manage memory upon creation, while growing and upo deletion
    6. generate some key network based statistics for the type 

    in some ways we are almost going to recreate some sort of of tree like form which might be the purpose then we are adding on some basic analysis 
    in the term of network typologies and methods which eventually will help us understand it better.
*/

#include<stdio.h>

/*
    Na ---> Nb --> Nb1
                    --> Nb2

*/

// type definition
typedef struct nodeA{
    nodeData data;
    int* nodeIdentifier; 
} node ;

