#include <stdio.h>

int main() {
    int a[100], n, pos, element, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &pos, &element);

    // shift elements to the right
    for (i = n; i > pos; i--) {
        a[i] = a[i-1];
    }

    // insert element
    a[pos] = element;
    n++;

    // print updated array
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
    }

    return 0;
}
