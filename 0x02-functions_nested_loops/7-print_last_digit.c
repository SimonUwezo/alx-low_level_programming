#include "main.h"
/**
* print_last_digit - prints the last digit of a num.
* @n: The to be printed
* Return: Value of the last digit of a num
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
