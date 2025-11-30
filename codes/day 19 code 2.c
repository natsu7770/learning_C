#include <stdio.h>

int main() {
    int number, sum = 0;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate sum of digits
    while (number != 0) {
        sum += number % 10;  // Add last digit to sum
        number /= 10;        // Remove last digit
    }

    // Output the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
