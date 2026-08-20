#include <stdio.h>

int main() {
    float cp, sp, percentage;

    scanf("%f %f", &cp, &sp);

    if (sp>cp) {
        percentage = ((sp-cp) / cp) * 100;
        printf("profit %.0f%%", percentage);
    }

    else if (cp>sp) {
        percentage = ((cp-sp) / cp) * 100;
        printf("loss %.0f%%", percentage);
    }

    else {
        printf("no profit no loss");
    }

    return 0;
}