#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;  // Start with 1 as we are multiplying
    int has_odd = 0;  // Flag to check if we found any odd digit

    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract digits and multiply if odd
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        num /= 10;
    }

    if (!has_odd) {
        product = 1;  // No odd digits found, product = 1
    }

    printf("%d\n", product);

    return 0;
}