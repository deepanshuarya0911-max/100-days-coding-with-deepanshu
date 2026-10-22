#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    int ch;

    scanf("%99s", sourceFile);
    scanf("%99s", destFile);

    source = fopen(sourceFile, "r");

    if (source == NULL) {
        printf("Source file not found");
        return 1;
    }

    destination = fopen(destFile, "w");

    if (destination == NULL) {
        printf("Error opening destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destFile);

    return 0;
}