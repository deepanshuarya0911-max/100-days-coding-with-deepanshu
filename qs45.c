#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (float)(2*i)/(4*i-1);
    }

    printf("approximate sum: %.2f\n", sum);

    return 0;
}
