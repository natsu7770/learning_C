#include <stdio.h>

int main() {
    char str[100];  // Buffer for input string (adjust size if needed)
    
    // Read the input string
    printf("Enter a lowercase string: ");
    scanf("%s", str);  // Reads until space or newline; for full line, use gets() if needed
    
    // Convert to uppercase by subtracting 32 from ASCII of lowercase letters
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    
    // Output the converted string
    printf("Uppercase: %s\n", str);
    
    return 0;
}
