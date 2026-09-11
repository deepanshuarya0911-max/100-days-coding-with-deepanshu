#include <stdio.h>

int main() {
    int n, arr[100], num, i;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num);
    i = n-1;
    while (i >= 0 && arr[i] > num) {
        arr[i+1] = arr[i];
        i--;
    }

    arr[i+1] = num;
    n++;

    for (i=0; i<n; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}
