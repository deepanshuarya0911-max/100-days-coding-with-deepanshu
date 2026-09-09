#include <stdio.h>

int main() {
    int n, i, key;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("found at index %d", i);
            return 0;
        }
    }
    printf("-1");

    return 0;
}
