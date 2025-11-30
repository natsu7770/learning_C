#include <stdio.h>

int main() {
    int number, count[10] = {0};
    int maxCount = 0, maxDigit = 0;

    // Read the input number
    scanf("%d", &number);

    // Count frequency of each digit
    while (number > 0) {
        int digit = number % 10;
        count[digit]++;
        number /= 10;
    }

    // Find the digit with the maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    // Print the digit that occurred the most times
    printf("%d\n", maxDigit);

    return 0;
}
