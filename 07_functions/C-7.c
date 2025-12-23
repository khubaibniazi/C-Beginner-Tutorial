#include <stdio.h>

// Function declaration (prototype)
// This tells the compiler that a function exists
void greet();

int main() {

    // Function call
    greet();   // This will run the greet function

    return 0;
}

// Function definition
void greet() {
    printf("Hello! Welcome to C programming.\n");
}
