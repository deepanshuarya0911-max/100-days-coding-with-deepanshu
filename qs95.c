#include <stdio.h>

int main()
{
    char str[200], longest[100], word[100];
    int i = 0, j = 0, max = 0, k;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            if (j > max)
            {
                max = j;

                for (k = 0; k < j; k++)
                {
                    longest[k] = word[k];
                }

                longest[j] = '\0';
            }

            j = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("%s", longest);

    return 0;
}