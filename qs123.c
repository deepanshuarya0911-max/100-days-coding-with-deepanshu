#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int last = '\n';

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    int c;
    while ((c = fgetc(fp)) != EOF) {
        characters++;

        if (c == '\n')
            lines++;

        if (isspace((unsigned char)c)) {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }

        last = c;
    }

    if (characters > 0 && last != '\n')
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);

    return 0;
}