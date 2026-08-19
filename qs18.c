#include <stdio.h>
#include <math.h>

int main (){
    int percentage;

    scanf("%d", &percentage);

    if (percentage >=90 && percentage <=100) {
        printf("grade A");
    }

    else if (percentage >=80 && percentage <=89) {
        printf("grade B");
    }

    else if (percentage >=70 && percentage <=79) {
        printf("grade C");
    }

    else if (percentage >=60 && percentage <=69) {
        printf("grade D");
    }

    else {
        printf("grade F");
    }

    return 0;
}