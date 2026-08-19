#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float simpleinterest, compoundinterest;

    scanf("%f %f %f", &principal, &rate, &time);

    simpleinterest = (principal * rate * time) / 100;

    compoundinterest = principal * pow((1 + rate / 100), time) - principal;

    printf("simple interest=%.2f, compound interest=%.2f",
           simpleinterest, compoundinterest);

    return 0;
}