#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%49s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nName\tRoll\tMarks\n");

    for(i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n",
               s[i].name,
               s[i].roll,
               s[i].marks);
    }

    return 0;
}