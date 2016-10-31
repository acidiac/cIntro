/*
    Program to covert lowercase to uppercase
    Amit Chanchal, amit.chanchal@hotmail.com
    (Just for fun, although we can use tolower or to upper functions we are going to do things the stupid way)
    31, October 2016
*/
#include <stdio.h>
#include <ctype.h> // not really needed

int main(void) {
    char letter = 'a';
    int ascii = toascii(letter);
    printf(" ascii code for %c is %d\n", letter, ascii);
    return 0;

}

