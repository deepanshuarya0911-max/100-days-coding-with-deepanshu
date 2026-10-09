#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0;

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d", firstNegative);

        if (i < n - k) {
            printf(" ");
        }
    }

    return 0;
}