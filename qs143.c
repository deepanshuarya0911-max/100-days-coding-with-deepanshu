#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct student s[100];
    int n, i, max=0;

    printf("enter number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("invalid number of students\n");
        return 1;
    }

    for (i=0; i<n; i++) {
        printf("enter name, roll and marks: ");
        scanf("%49s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i=1; i<n; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    printf("topper: %s (marks: %d)\n", s[max].name, s[max].marks);

    return 0;
}
