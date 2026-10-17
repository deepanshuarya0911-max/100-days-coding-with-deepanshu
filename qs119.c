#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int seen[100001] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if(seen[arr[i]] == 1) {
            printf("%d", arr[i]);
            break;
        }
        seen[arr[i]] = 1;
    }

    return 0;
}
