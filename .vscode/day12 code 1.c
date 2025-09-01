
#include <stdio.h>

int main() {
    int lateDays;
    int fine;

    // Read the number of late days
    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 5) {
        fine = lateDays * 2;  // ₹2 per day for first 5 days
        printf("Fine ₹%d\n", fine);
    } else if (lateDays <= 10) {
        // For first 5 days: 5 * 2 = 10
        // For next days: (lateDays - 5) * 4
        fine = 10 + (lateDays - 5) * 4;
        printf("Fine ₹%d\n", fine);
    } else if (lateDays <= 30) {
        // For first 5 days: 5 * 2 = 10
        // Next 5 days: 5 * 4 = 20
        // Remaining days: (lateDays - 10) * 5
        fine = 10 + 20 + (lateDays - 10) * 5;
        printf("Fine ₹%d\n", fine);
    } else {
        // More than 30 days late
        printf("Membership Cancelled\n");
    }

    return 0;
}