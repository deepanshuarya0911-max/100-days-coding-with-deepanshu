#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    printf("Enter Name: ");
    scanf("%49s", e.name);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining.day,
          &e.joining.month, &e.joining.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id, e.joining.day,
           e.joining.month, e.joining.year);

    return 0;
}