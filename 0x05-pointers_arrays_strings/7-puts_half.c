#include "main.h"

/**
 * puts_half - function that prints half a string followed by a new line.
 *
 * @str: The input string
 */
void puts_half(char *str)
{
    int full_string = 0;
    int half_string = 0;
    int _putchar(char c);

    while (str[full_string] != '\0')
    {
        full_string++;
    }

    if (full_string % 2 == 1)
    {
        half_string = (full_string - 1) / 2;
    }
    else
    {
        half_string = full_string / 2;
    }

    while (half_string < full_string)
    {
        _putchar(str[half_string]);
        half_string++;
    }

    _putchar('\n');
}
