#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *dest_file;
    char source_filename[100], dest_filename[100];
    char ch;
    
    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%99s", source_filename);
    
    printf("Enter destination filename: ");
    scanf("%99s", dest_filename);
    
    // Open source file in read mode
    source_file = fopen(source_filename, "r");
    
    // Check if source file was opened successfully
    if (source_file == NULL) {
        printf("Error: Could not open source file '%s'\n", source_filename);
        return 1;
    }
    
    // Open destination file in write mode
    dest_file = fopen(dest_filename, "w");
    
    // Check if destination file was opened successfully
    if (dest_file == NULL) {
        printf("Error: Could not open destination file '%s'\n", dest_filename);
        fclose(source_file);
        return 1;
    }
    
    // Copy content from source to destination using fgetc() and fputc()
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }
    
    // Close both files
    fclose(source_file);
    fclose(dest_file);
    
    printf("File copied successfully to %s\n", dest_filename);
    
    return 0;
}