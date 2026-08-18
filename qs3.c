#include <stdio.h>

int main() {
    int length, breadth;
    scanf("%d %d", &length, &breadth);

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area=%d, Perimeter=%d", area, perimeter);

    return 0;
}