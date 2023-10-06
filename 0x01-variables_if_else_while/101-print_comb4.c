#include <stdio.h>
/**
 * main - Main program that prints all possible different combinations of three digits.
 *
 * Return:Always 0(success)
 */
int main(void)
{
int digit1, digit2, digit3;
for (digit1 = 0; digit1 <= 2; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 2; digit2++)
{
for (digit3 = digit2 + 1; digit3 <= 2; digit3++)
{
putchar(digit1 + '0');
putchar(digit2 + '0');
putchar(digit3 + '0');
if (digit1 != 0 || digit2 != 1 || digit3 != 2)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

