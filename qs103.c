#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int totalSum = 0;

    // Input array and calculate total sum
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }

        leftSum += nums[i];
    }

    printf("-1");

    return 0;
}