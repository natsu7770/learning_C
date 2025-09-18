#include <stdio.h>
#include <math.h>

int swapFirstLast(int num) {
    // If number is single digit, return as is
    if (num >= 0 && num < 10) {
        return num;
    }

    int digits = (int)log10(num);  // Number of digits - 1
    int firstDigit = num / (int)pow(10, digits);
    int lastDigit = num % 10;

    // If first and last digits are the same, no swap needed
    if (firstDigit == lastDigit) {
        return num;
    }

    // Remove first digit
    int middlePart = num % (int)pow(10, digits);
    // Remove last digit from middlePart
    middlePart = middlePart / 10;

    // Construct new number
    int swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    return swappedNum;
}

int main() {
    int num;

    // Input number
    scanf("%d", &num);

    int result = swapFirstLast(num);
    printf("%d\n", result);

    return 0;
}