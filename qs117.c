#include <stdio.h>

int main() {
    int m, n, i = 0, j = 0, k = 0;

    scanf("%d", &m);
    int nums1[m];

    for (int a = 0; a < m; a++) {
        scanf("%d", &nums1[a]);
    }

    scanf("%d", &n);
    int nums2[n], merged[m + n];

    for (int a = 0; a < n; a++) {
        scanf("%d", &nums2[a]);
    }

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m) {
        merged[k++] = nums1[i++];
    }

    while (j < n) {
        merged[k++] = nums2[j++];
    }

    for (int a = 0; a < m + n; a++) {
        printf("%d ", merged[a]);
    }

    return 0;
}