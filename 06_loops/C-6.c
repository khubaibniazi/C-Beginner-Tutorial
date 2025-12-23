#include <stdio.h>

int main() {

    int i;

    // 1️⃣ FOR LOOP
    // Used when we know how many times the loop should run
    printf("For Loop Output:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    printf("\n");

    // 2️⃣ WHILE LOOP
    // Used when the condition is checked before the loop runs
    printf("While Loop Output:\n");
    i = 1;  // initialization
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    // 3️⃣ DO-WHILE LOOP
    // Runs at least once, condition is checked after execution
    printf("Do-While Loop Output:\n");
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}