#include <stdio.h>
#include <math.h>

int main()
{
    long long n, sum, x;

    scanf("%lld", &n);

    sum = n * (n + 1) / 2;

    x = sqrt(sum);

    if (x * x == sum)
        printf("%lld", x);
    else
        printf("-1");

    return 0;
}