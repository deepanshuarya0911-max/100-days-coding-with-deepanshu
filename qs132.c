#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight light;
    char input[20];

    scanf("%19s", input);

    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid input");
        return 0;
    }

    switch (light) {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}