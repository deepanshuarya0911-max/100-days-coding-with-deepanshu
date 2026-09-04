#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        // print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // print numbers
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
