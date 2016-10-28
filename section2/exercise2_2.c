/*
    Introduction to C programming
    2_2 Exercise for loops
    
    Using for loop create an horizontal bar charts displaying following test scores (20,21,23,12,11,19,5,8,5)
    it should look like 
    [item1] ||||
    [item2] ||||||
    [item3] |||||||
    - - - - - - - - - - - - - - - - - - - - - - - - - - 
    Author: Amit Chanchal
    Date: 25 October, 2016
    amit.chanchal@hotmail.com
    - - - - - - - - - - - - - - - - - - - - - - - - - -

*/
#include <stdio.h>
#include <stdlib.h>

// Prototypes
void renderChart(int score);
void drawDashedLine(void);


int main (void) {
    int scores[9] = {20,21,23,12,11,19,5,8,5}; // Storing all the scores in Scores array of int 
    // How do we get length of an array?
    int numScores = sizeof(scores)/ sizeof(int);
    printf("Chart showing scores of  %d students in the class\n", numScores);
    drawDashedLine();
    
    for (int num=0; num<numScores; num++){
        int currentVal = scores[num];
        printf("[%d]\t", currentVal);
        renderChart(currentVal);
        printf("\n");
    }
    
    drawDashedLine();

    return 0;
}


void renderChart(int score) {
    for (int i = 0; i<=score; i++){
        printf("|");
    }
}

void drawDashedLine(void){
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
}
