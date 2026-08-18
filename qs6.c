#include <stdio.h>

int main() {
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d", a, b);

    return 0;
}