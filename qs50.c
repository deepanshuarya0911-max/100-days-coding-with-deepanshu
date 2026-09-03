#include <stdio.h>

int main() {
    int i, j;

    for (i=1; i<=5; i++) {

        //print spaces
        for (j=1; j<i; j++) {
            printf(" ");
        }

        //print stars
        for (j=i; j<=5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
