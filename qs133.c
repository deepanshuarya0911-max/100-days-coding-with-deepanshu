#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char month[10];
    enum Month m;

    scanf("%s", month);

    char months[12][4] = {
        "JAN", "FEB", "MAR", "APR",
        "MAY", "JUN", "JUL", "AUG",
        "SEP", "OCT", "NOV", "DEC"
    };

    for (m = JAN; m <= DEC; m++) {
        if (strcmp(month, months[m]) == 0)
            break;
    }

    switch (m) {
        case FEB:
            printf("28 or 29 days");
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days");
            break;

        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}