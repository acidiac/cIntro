// Just some fun with algorithms 

/*
    Integer Multiplication
    Input : Two n digit number (x, y)
    Output : Simply the product x*y 
    Understanding the primitives:
    Let's say we don't have multiplication operator

*/

#include <stdio.h>
#include <time.h>

long int multiplyTwo(int x, int y);

int main(void) {
    long int product;
    int x, y;
    printf("Please enter the first number\n");
    scanf("%d", &x);
    printf("Please enter the second number\n");
    scanf("%d", &y);
    clock_t t;
    t = clock();
    // Main Execution of our function
    //product = multiplyTwo(x, y);
    product = x * y;
    printf("the product is %ld\n", product);

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("took %f seconds to execute \n", time_taken);
    return 0;
}

// Now think about how we want to implement the multiplyTwo functionality

/*
    In this implementation we can think of mutliplying two numbers as adding one number over and over again, i.e. other number times 
    2*4 can be seen as 2+2+2+2 or 4+4, already we can see that one takes fewer iterations
*/
long int multiplyTwo(int x, int y){
    int i, j;
    long int product = 0;
    if (x >= y){
        for (int i = 0 ; i < y; i++ ){
            product = product + x;
        }
    } else {
        for (int i = 0 ; i < x; i++ ){
            product = product + y;
        }
    }
    return product;
}

/*
    Primary School Solution
        1234
        *  42
        ------------
        2468
      4936-
    -----------------
      51828

*/






