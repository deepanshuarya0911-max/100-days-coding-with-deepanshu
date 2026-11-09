#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}