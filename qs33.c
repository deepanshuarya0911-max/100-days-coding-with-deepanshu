#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;;

    scanf("%d", &n);
    original=n;

    while (n!=0) {
        remainder = n%10;
        sum = sum + (remainder*remainder*remainder);
        n = n/10;
    }

    if (sum == original)
    printf("armstrong");

    else
    printf("not armstrong");

    return 0;
}
