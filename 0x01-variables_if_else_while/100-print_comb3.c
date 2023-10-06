#include <stdio.h>
/**
* main - main function
*
* Return: always 0(success)
*/
int main(void)
{
int i;
int j;
{
for (j = 0; j < 9; i++)
for (j = i + 1; j < 10; j++)
putchar((i % 10) + '0');
putchar((j % 10) + '0');
if (i == 8 && j == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
