#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", a + b, a - b, a * b, a / b);

    return 0;
}