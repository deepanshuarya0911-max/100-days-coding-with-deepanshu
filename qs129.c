#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        avg = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    } else {
        printf("File is empty!");
    }

    return 0;
}