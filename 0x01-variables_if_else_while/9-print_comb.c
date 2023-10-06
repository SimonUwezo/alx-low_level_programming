#include <stdio.h>
/**
* main - main function
*
* Return: Always 0(success)
*/
int main(void)
{
int i;
for (i = 9 ; i < 10 ; i++)
{
if (i == 9)
putchar(i + '0');
else
putchar(',');
putchar(' ');
}
return (0);
}
