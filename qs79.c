#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // traverse diagonals
    for (int sum = 0; sum <= r + c - 2; sum++) {
        int start = (sum < c) ? 0 : sum - c + 1;
        int end = (sum < r) ? sum : r - 1;

        for (int i = start; i <= end; i++) {
            int j = sum - i;
            printf("%d", a[i][j]);
        }
    }

    return 0;
}
