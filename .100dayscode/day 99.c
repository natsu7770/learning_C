#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define Student structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    // Allocate memory dynamically for a Student structure
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    
    // Check if memory allocation was successful
    if (student == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Input student details
    printf("Enter student name: ");
    scanf("%s", student->name);
    
    printf("Enter roll number: ");
    scanf("%d", &student->roll);
    
    printf("Enter marks: ");
    scanf("%d", &student->marks);
    
    // Print student details
    printf("\nName: %s | Roll: %d | Marks: %d\n", 
           student->name, student->roll, student->marks);
    
    // Free the allocated memory
    free(student);
    student = NULL;
    
    return 0;
}