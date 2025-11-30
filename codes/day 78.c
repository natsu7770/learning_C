#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;
    
    // Open the file in read mode
    file = fopen("text.txt", "r");
    
    // Check if file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file 'text.txt'\n");
        return 1;
    }
    
    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Convert to lowercase for easier comparison
        ch = tolower(ch);
        
        // Check if character is a letter
        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }
            // Otherwise it's a consonant
            else {
                consonants++;
            }
        }
        // Digits and special characters are ignored
    }
    
    // Close the file
    fclose(file);
    
    // Display results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}