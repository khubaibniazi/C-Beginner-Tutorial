#include <stdio.h>

int main() {

    // Declaring an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    int i;

    // Printing array elements using a loop
    printf("Array elements are:\n");

    for (i = 0; i < 5; i++) {
        printf("Element at index %d = %d\n", i, numbers[i]);
    }

    return 0;
}