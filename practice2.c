#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        printf(" ");
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Print right side of ladder
        printf("|\n");

        // Print vertical spacing between rungs
        if (i < rows - 1) {
            printf("|\n");
        }
    }
    printf("\n");

    return 0;
}