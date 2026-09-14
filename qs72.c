#include <stdio.h>

int main()
{
    int r, c, i, j, sum = 0;
    int a[100][100];

    scanf("%d %d", &r, &c);

    // Read matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}