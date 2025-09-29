#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;

    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Read matrix elements
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add element to sum
        }
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}
