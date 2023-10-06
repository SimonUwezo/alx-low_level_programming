#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    /* Your code goes here */

    if (n > 0)
        printf("%d is positive", n);
    else if (n == 0)
        printf("%d is zero", n);
    else if (n < 0)
        printf("%d is negative", n);
    
    printf("\n");
    
    return (0);
}
