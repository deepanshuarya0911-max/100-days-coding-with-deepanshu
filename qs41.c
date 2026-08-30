#include <stdio.h>

int main()
{
    int n, temp, first, last, power = 1, result;

    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = last * power + (n % power) - last + first;

    printf("%d", result);

    return 0;
}