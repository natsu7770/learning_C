#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Buffer for input string (adjust size if needed)
    
    // Read input string (using fgets for safety; avoids buffer overflow)
    printf("Enter a string: ");  // Optional prompt for clarity
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline if present (from fgets)
    str[strcspn(str, "\n")] = 0;
    
    // Iterate and print non-vowel characters
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            printf("%c", ch);
        }
    }
    printf("\n");  // Add newline for clean output
    
    return 0;
}
