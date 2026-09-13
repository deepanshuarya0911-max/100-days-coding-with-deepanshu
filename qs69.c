#include <stdio.h>

int main()
{
    int n, a[100], largest, second;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}