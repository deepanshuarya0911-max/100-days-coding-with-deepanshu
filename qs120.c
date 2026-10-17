#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, newWord = 1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            newWord = 1;
        } else {
            if (newWord == 1) {
                str[i] = toupper(str[i]);
                newWord = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        }
    }

    printf("%s", str);

    return 0;
}