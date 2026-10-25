#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL) {
        printf("Error opening input file!");
        if (fp2 != NULL)
            fclose(fp2);
        return 1;
    }

    if (fp2 == NULL) {
        printf("Error opening output file!");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        ch = toupper(ch);
        fputc(ch, fp2);
    }

    printf("File converted to uppercase successfully!");

    fclose(fp1);
    fclose(fp2);

    return 0;
}