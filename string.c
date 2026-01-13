//Print all characters of a string
#include <stdio.h>

int main() {
    char str[] = "CSE";

    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    return 0;
}
