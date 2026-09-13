#include <stdio.h>

int main()
{
    int n, a[100], k, temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    k = k % n;

    for (int j = 0; j < k; j++)
    {
        temp = a[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}