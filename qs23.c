#include <stdio.h>

int main() {
    int days, fine;

    printf("enter late days");
    scanf("%d", &days);

    if (days>30) {
        printf("membership cancelled");
    }

    else if (days<=5) {
        fine = days*2;
        printf("fine Rs%d", fine);
    }

    else if (days<=10) {
        fine = (5*2) + (days-5)*4;
        printf("fine Rs%d", fine);
    }

    else {
        fine = (5*2)+(5*4) + (days-10)*6;
        printf("fine Rs%d", fine);
    }

    return 0;
}