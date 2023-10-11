#include <stdio.h>

int main() {
    int n = 98; /* The number of Fibonacci numbers to print */
    unsigned long long first = 1; /* First Fibonacci number */
    unsigned long long second = 2; /* Second Fibonacci number */
    unsigned long long next;

    printf("%llu, %llu", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(", %llu", next);

        /* Shift the variables for the next iteration */
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
