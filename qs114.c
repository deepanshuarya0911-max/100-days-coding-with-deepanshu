#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last[256], maxLen = 0, start = 0;

    scanf("%999s", s);

    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        if (last[ch] >= start) {
            start = last[ch] + 1;
        }

        last[ch] = i;

        int len = i - start + 1;

        if (len > maxLen) {
            maxLen = len;
        }
    }

    printf("%d", maxLen);

    return 0;
}