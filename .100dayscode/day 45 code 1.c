#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Buffer for string input
    char target;    // Single character to count
    
    // Read the string
    scanf("%s", str);
    
    // Read the target character
    scanf(" %c", &target);  // Space before %c to ignore newline
    
    int count = 0;
    int len = strlen(str);
    
    // Loop through string and count matches
    for (int i = 0; i < len; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    
    // Output the count
    printf("%d\n", count);
    
    return 0;
}
