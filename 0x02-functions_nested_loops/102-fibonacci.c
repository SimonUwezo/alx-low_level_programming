#include <stdio.h>

int main() {
    int n = 50;  // Number of Fibonacci numbers to print
    unsigned long long int a = 1, b = 2, temp;

    if (n >= 1) {
        printf("%llu", a);
    }
    if (n >= 2) {
        printf(", %llu", b);
    }

    for (int i = 3; i <= n; i++) {
        temp = a + b;
        printf(", %llu", temp);
        a = b;
        b = temp;
    }

    printf("\n");
    return 0;
}
