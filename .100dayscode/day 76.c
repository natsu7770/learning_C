#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    char text[500];
    
    // Take filename from user
    printf("Enter filename to append to: ");
    scanf("%99s", filename);
    
    // Clear input buffer
    getchar();
    
    // Take text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    // Open file in append mode
    file = fopen(filename, "a");
    
    // Check if file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }
    
    // Append text to the file
    fprintf(file, "%s", text);
    
    // Close the file
    fclose(file);
    
    printf("File updated successfully with appended text.\n");
    
    return 0;
}