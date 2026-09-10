#include <stdio.h>

int main()
{
    int n1, n2, i;
    int a[100], b[100], merge[200];

    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Copy first array
    for(i = 0; i < n1; i++)
    {
        merge[i] = a[i];
    }

    // Copy second array
    for(i = 0; i < n2; i++)
    {
        merge[n1 + i] = b[i];
    }

    // Print merged array
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}