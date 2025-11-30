#include <stdio.h>

// Function to calculate the GCD (Greatest Common Divisor) using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, lcm;

    // Input two numbers
    scanf("%d %d", &num1, &num2);

    // Calculate LCM using formula: (num1 * num2) / gcd(num1, num2)
    lcm = (num1 * num2) / gcd(num1, num2);

    // Output the LCM
    printf("%d\n", lcm);

    return 0;
}
