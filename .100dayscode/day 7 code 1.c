#include <stdio.h>
int main() {
    int year;
    // Input the year
    scanf("%d", &year);
    // Check leap year conditions
    if ((year % 400) == 0) {
        printf("Leap year\n");
    } else if ((year % 100) == 0) {
        printf("Not a leap year\n");
    } else if ((year % 4) == 0) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
    return 0;
}