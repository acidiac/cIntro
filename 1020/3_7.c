#include <stdio.h>

int main (void) {
    int i;
    float f;
    char c;
    char str[10];
    scanf("%d %f %c %s", &i, &f, &c, str);
    printf("%d %f %c %s", i, f, c, str);
    return 0;

}