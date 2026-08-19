#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, root1, root2;

    scanf("%f %f %f", &a, &b, &c);

    d = b*b-4*a*c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);

        printf("roots are real and different: %g, %g", root1, root2);
    }
    else if (d == 0) {
        root1 = -b/(2*a);

        printf("roots are real and same: %g", root1);
    }
    else {
        printf("roots are complex");
    }

    return 0;
}