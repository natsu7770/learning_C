#include <stdio.h>

// Enumeration for days of the week
enum Days {
    SUNDAY = 0,
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6
};

int main() {
    // Array to store day names
    char *day_names[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };
    
    // Print each day with its integer value
    printf("Days of the Week:\n");
    printf("================\n");
    
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", day_names[i], i);
    }
    
    return 0;
}