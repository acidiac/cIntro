/*
    Introduction to C programming
    Section4 Composite and User Defined Datatypes 
    1_1 Structures

    Structures allows us to define a datatype which can hold data of different types. It enables us to group data which 
    are logical related in one place. Let's say if we wanted to store data about students in a class we would have to create
    so many different variables and working with them would be so difficult!
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 31 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include <stdio.h>
#include <stdlib.h>


struct car {
    int releaseYear;
    double mileage;
    char name[50];
    double price;
    double maxSpeed;
};

void printerFunc (struct car x);

int main (void){
    struct car audi = {2016, 0.7, "AudiTTx",230000.0, 260};
    printerFunc(audi);
    return EXIT_SUCCESS;
}

void printerFunc (struct car x) {
    printf("- - - - - - Details of the Car: %s - - - - - - - - - - -\n", x.name);
    printf("Year release: %d\n", x.releaseYear);
    printf("Market Price: %.2f Dollars\n", x.price);
    printf("Maximum Speed: %.2f Km/Hr\n", x.maxSpeed);
    printf("Mileage: %.2f Km/Ltrs\n", x.mileage);
    printf("- - - - - - - - - - - - - - - - - - - - - --  -- - - - - -- - - - - - - - - -\n");
}