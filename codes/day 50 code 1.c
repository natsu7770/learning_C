#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    scanf("%s", input);  // Read the date string (e.g., "15/04/2025")
    
    int day, month, year;
    sscanf(input, "%d/%d/%d", &day, &month, &year);  // Parse components
    
    // Array of month abbreviations (index 1-12)
    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    
    // Output in required format: dd-Mmm-yyyy
    printf("%02d-%s-%d\n", day, months[month], year);
    
    return 0;
}