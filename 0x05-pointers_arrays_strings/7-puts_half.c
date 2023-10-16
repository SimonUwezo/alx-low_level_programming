#include "main.h"
/**
* puts_half - function that prints half a string
* followed by a new line.
*
* @str: The input string
*/
void puts_half(char *str)
{
int _putchar(char c);
int full_string;
int half_string;
full_string = 0;
while (str[full_string] != '\0')
full_string++;
if (full_string % 2 == 1)
half_string++;
while (half_string < full_string)
{
_putchar(str[half_string]);
half_string++;
}
_putchar('\n');
}
