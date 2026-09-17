#include <stdio.h>

int main()
{
    int r, c, a[100][100];
    int i, j, distinct = 1;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Compare diagonal elements
    for(i = 0; i < r && i < c; i++)
    {
        for(j = i + 1; j < r && j < c; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct == 1)
        printf("True");
    else
        printf("False");

    return 0;
}