#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if original and reversed are the same
    if (originalNum == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}