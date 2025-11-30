#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[256];  // Buffer to store each line
    
    // Open the file in read mode
    file = fopen("info.txt", "r");
    
    // Check if file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file 'info.txt'\n");
        return 1;
    }
    
    // Read and print lines until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    // Close the file
    fclose(file);
    
    return 0;
}