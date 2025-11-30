#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    bool distinct = true;

    for (int i = 0; i < rows && i < cols; i++) {
        for (int j = i + 1; j < rows && j < cols; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct)
            break;
    }

    printf(distinct ? "True\n" : "False\n");

    return 0;
}
