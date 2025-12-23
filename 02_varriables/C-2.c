#include <stdio.h>

int main() {

    // 1️⃣ int → used to store whole numbers
    int age = 20;
    int year = 2025;

    // 2️⃣ float → used to store decimal numbers (less precision)
    float height = 5.9;

    // 3️⃣ double → used to store decimal numbers (more precision)
    double pi = 3.14159265;

    // 4️⃣ char → used to store a single character
    char grade = 'A';

    // Printing all variables
    printf("Age: %d\n", age);          // %d → integer
    printf("Year: %d\n", year);
    printf("Height: %.1f\n", height);  // %.1f → one decimal place
    printf("Value of pi: %lf\n", pi);  // %lf → double
    printf("Grade: %c\n", grade);      // %c → character

    return 0; 
}
