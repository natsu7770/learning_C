#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For toupper() and isalpha()

int main() {
    char name[100];  // Buffer to read the name (adjust size if needed)
    
    // Read the entire line including spaces
    fgets(name, sizeof(name), stdin);
    
    // Remove trailing newline if present
    name[strcspn(name, "\n")] = '\0';
    
    int len = strlen(name);
    if (len == 0) {
        printf("\n");  // Empty input handling
        return 0;
    }
    
    // Print first initial (uppercase)
    printf("%c", toupper(name[0]));
    
    // Iterate through the string to find subsequent word starts
    for (int i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && isalpha(name[i])) {
            // Found start of a new word
            printf(".%c", toupper(name[i]));
        }
    }
    
    printf("\n");  // End with newline
    return 0;
}
