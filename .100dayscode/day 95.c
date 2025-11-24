#include <stdio.h>
#include <string.h>

// Student Structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to find and return top student
struct Student findTopStudent(struct Student students[], int n) {
    struct Student topStudent = students[0];
    
    // Iterate through all students to find highest marks
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    
    return topStudent;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // Create array of students
    struct Student students[n];
    
    // Input student details
    printf("Enter student details (name roll marks):\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    
    // Find top student
    struct Student top = findTopStudent(students, n);
    
    // Print top student details
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", 
           top.name, top.roll, top.marks);
    
    return 0;
}