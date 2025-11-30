#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student student;
    struct Student *ptr = &student;  // Pointer to Student struct
    
    // Input student details
    printf("Enter student name: ");
    scanf("%s", ptr->name);
    
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);
    
    printf("Enter marks: ");
    scanf("%d", &ptr->marks);
    
    // Modify data using pointer to struct
    printf("\nModifying data...\n");
    strcpy(ptr->name, "John");
    ptr->roll = 106;
    ptr->marks = 91;
    
    // Display modified data using pointer
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", 
           ptr->name, ptr->roll, ptr->marks);
    
    return 0;
}