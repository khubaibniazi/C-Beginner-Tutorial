#include <stdio.h>

int main() {

    int number;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // if–else condition
    if (number % 2 == 0) {
        printf("The number is EVEN.\n");
    } else {
        printf("The number is ODD.\n");
    }

    return 0;
}
