#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize sum for each row
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j]; // Add element to row sum
        }
    }

    // Print the sum of each row separated by space
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
