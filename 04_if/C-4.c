#include <stdio.h>

int main() {

    int number;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // if condition
    if (number > 0) {
        printf("The number is positive.\n");
    }

    // This line always runs
    printf("Program finished.\n");

    return 0;
}
