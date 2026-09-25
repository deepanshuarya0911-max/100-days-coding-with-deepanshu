#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    scanf("%s", str1);
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]]++;
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        freq[(unsigned char)str2[i]]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}