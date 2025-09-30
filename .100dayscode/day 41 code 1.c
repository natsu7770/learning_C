#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    
    // Get input string from the user
    fgets(str, sizeof(str), stdin);

    // Count characters manually
    while (str[count] != '\0') {
        count++;
    }
    
    // Since fgets() reads the newline character as well, subtract 1 if present
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("%d\n", count);

    return 0;
}
