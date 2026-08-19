#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("largest is %d", a);
    }
    else if (b >= a && b >= c) {
        printf("largest is %d", b);
    }
    else {
        printf("largest is %d", c);
    }

    return 0;
}