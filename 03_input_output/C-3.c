#include <stdio.h>

int main() {

    // Declaring variables
    int age;
    float height;
    char grade;

    // Taking integer input from the user
    printf("Enter your age: ");
    scanf("%d", &age);   // & is used to store input in the variable

    // Taking float input from the user
    printf("Enter your height (in feet): ");
    scanf("%f", &height);

    // Taking character input from the user
    printf("Enter your grade: ");
    scanf(" %c", &grade);  
    // Space before %c avoids newline issue

    // Displaying the output
    printf("\n--- Your Details ---\n");
    printf("Age: %d years\n", age);
    printf("Height: %.2f feet\n", height);
    printf("Grade: %c\n", grade);

    return 0; // Program ends
}
