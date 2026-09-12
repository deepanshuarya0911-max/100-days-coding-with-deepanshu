#include <stdio.h>

int main()
{
    int a[100], n, pos, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &pos);

    // Shift elements to the left
    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    // Print updated array
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}