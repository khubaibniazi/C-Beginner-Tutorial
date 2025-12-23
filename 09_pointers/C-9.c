#include <stdio.h>

int main() {

    int number = 10;      // Normal integer variable
    int *ptr;             // Pointer variable (stores address)

    // Store address of number in ptr
    ptr = &number;

    // Printing values
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);

    // Using pointer
    printf("Value using pointer: %d\n", *ptr);  // *ptr gives value at address
    printf("Address stored in ptr: %p\n", ptr);

    return 0;
}
