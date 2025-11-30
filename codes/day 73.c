#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;  // Flag to track if we're inside a word
    
    // Open the file in read mode
    file = fopen("sample.txt", "r");
    
    // Check if file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file 'sample.txt'\n");
        return 1;
    }
    
    // Read file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        
        // Count lines
        if (ch == '\n') {
            lines++;
        }
        
        // Count words: increment when entering a word, decrement when leaving
        if (isspace(ch)) {
            if (in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }
    
    // Handle the last word if file doesn't end with whitespace
    if (in_word) {
        words++;
    }
    
    // Handle case where file has content but no newline at the end
    if (characters > 0 && ch != '\n') {
        lines++;
    }
    
    // Close the file
    fclose(file);
    
    // Display results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    return 0;
}