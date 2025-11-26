#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Enumeration for operation status
enum Status {
    SUCCESS = 1,
    FAILURE = 2,
    TIMEOUT = 3
};

int main() {
    char status_input[20];
    enum Status status;
    
    // Take status from user
    printf("Enter status (SUCCESS, FAILURE, or TIMEOUT): ");
    scanf("%s", status_input);
    
    // Convert input to uppercase
    for (int i = 0; status_input[i]; i++) {
        status_input[i] = toupper(status_input[i]);
    }
    
    // Determine the status based on input
    if (strcmp(status_input, "SUCCESS") == 0) {
        status = SUCCESS;
    } else if (strcmp(status_input, "FAILURE") == 0) {
        status = FAILURE;
    } else if (strcmp(status_input, "TIMEOUT") == 0) {
        status = TIMEOUT;
    } else {
        printf("Invalid status!\n");
        return 1;
    }
    
    // Print message based on status
    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
    }
    
    return 0;
}