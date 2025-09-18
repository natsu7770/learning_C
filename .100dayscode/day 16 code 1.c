#include <stdio.h>

int main() {
    int num, i;
    int binary[32];  // Array to store binary digits
    int index = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }

    // Print binary number in reverse order
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}