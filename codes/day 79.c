#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int number;
    int sum = 0;
    int count = 0;
    double average = 0.0;
    
    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    
    // Check if file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open file 'numbers.txt'\n");
        return 1;
    }
    
    // Read integers from the file
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }
    
    // Close the file
    fclose(file);
    
    // Check if any numbers were read
    if (count == 0) {
        printf("Error: No integers found in the file\n");
        return 1;
    }
    
    // Calculate average
    average = (double)sum / count;
    
    // Display results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    
    return 0;
}