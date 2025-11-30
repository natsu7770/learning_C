#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student student1, student2;
    
    // Input for Student 1
    printf("Enter Student1 details:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Roll: ");
    scanf("%d", &student1.roll);
    printf("Marks: ");
    scanf("%d", &student1.marks);
    
    // Input for Student 2
    printf("\nEnter Student2 details:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Roll: ");
    scanf("%d", &student2.roll);
    printf("Marks: ");
    scanf("%d", &student2.marks);
    
    // Compare the two structures
    if (strcmp(student1.name, student2.name) == 0 &&
        student1.roll == student2.roll &&
        student1.marks == student2.marks) {
        printf("\nSame\n");
    } else {
        printf("\nDifferent\n");
    }
    
    return 0;
}