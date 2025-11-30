#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);  // Read the input string
    
    int len = strlen(str);
    int first = 1;  // Flag to handle comma formatting
    
    // Generate all substrings
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            // Print comma before substring (except for the first one)
            if (!first) {
                printf(",");
            }
            first = 0;
            
            // Print substring from index i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
        }
    }
    
    printf("\n");
    
    return 0;
}