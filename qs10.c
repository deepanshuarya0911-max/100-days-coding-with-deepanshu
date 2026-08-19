#include <stdio.h>

int main() {
    int seconds, hours, minutes, secs;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    secs = seconds % 60;

    printf("%d:%d:%d", hours, minutes, secs);

    return 0;
}