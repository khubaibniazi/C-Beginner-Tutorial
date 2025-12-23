#include <stdio.h>

// Defining a structure
struct Student {
    int roll;
    float marks;
    char grade;
};

int main() {

    // Creating a structure variable
    struct Student s1;

    // Assigning values
    s1.roll = 1;
    s1.marks = 85.5;
    s1.grade = 'A';

    // Printing values
    printf("Student Roll: %d\n", s1.roll);
    printf("Student Marks: %.2f\n", s1.marks);
    printf("Student Grade: %c\n", s1.grade);

    return 0;
}
