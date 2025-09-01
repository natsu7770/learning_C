#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    // Input units consumed
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        // First 100 units at ₹5
        // Remaining units at ₹8
        bill = 100 * 5 + (units - 100) * 8;
    } else {
        // First 100 units at ₹5
        // Next 100 units at ₹8
        // Remaining units at ₹10
        bill = 100 * 5 + 100 * 8 + (units - 200) * 10;
    }

    printf("Bill: ₹%d\n", bill);

    return 0;
}