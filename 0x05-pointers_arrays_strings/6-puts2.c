#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: The string to print
*/
void puts2(char *str)
{
int _putchar(char c);
int z = 0;
while (str[z] != '\0')
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
z++;
}
_putchar('\n');
}
