#include <stdio.h>

int main() {
    int n, sum = 0, total;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}