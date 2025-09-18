#include <stdio.h>

int main() {
    int num, i;

    // Input from user
    scanf("%d", &num);

    // Loop to find factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
