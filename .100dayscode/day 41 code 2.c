#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Read input string
    scanf("%s", str);

    // Loop through each character until null terminator is encountered
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
