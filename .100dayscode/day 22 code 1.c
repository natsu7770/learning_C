#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, sum = 0;

    // Read input number
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorials of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    // Check if sum equals the number
    if (sum == num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
