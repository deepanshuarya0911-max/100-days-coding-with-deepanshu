#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    scanf("%49s", s.name);
    scanf("%d", &s.roll_no);
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d",
           s.name, s.roll_no, s.marks);

    return 0;
}