#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char ch;
    
    // Open input file in read mode
    input_file = fopen("input.txt", "r");
    
    // Check if input file was opened successfully
    if (input_file == NULL) {
        printf("Error: Could not open file 'input.txt'\n");
        return 1;
    }
    
    // Open output file in write mode
    output_file = fopen("output.txt", "w");
    
    // Check if output file was opened successfully
    if (output_file == NULL) {
        printf("Error: Could not open file 'output.txt'\n");
        fclose(input_file);
        return 1;
    }
    
    // Read from input file, convert to uppercase, and write to output file
    while ((ch = fgetc(input_file)) != EOF) {
        // Convert lowercase letters to uppercase
        ch = toupper(ch);
        
        // Write the character to output file
        fputc(ch, output_file);
    }
    
    // Close both files
    fclose(input_file);
    fclose(output_file);
    
    printf("Text converted to uppercase successfully.\n");
    printf("Output written to output.txt\n");
    
    return 0;
}