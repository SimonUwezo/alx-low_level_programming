#include <stdio.h>

int main() {
    int n = 98; /* The number of Fibonacci numbers to print */
    int first = 1; /* First Fibonacci number */
    int second = 2; /* Second Fibonacci number */
    int next;

    int i; // Declare i before the loop

    printf("%d, %d", first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);

        /* Shift the variables for the next iteration */
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
