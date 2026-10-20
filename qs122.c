#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}