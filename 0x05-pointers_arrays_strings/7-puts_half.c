#include "main.h"

/**
 * puts_half - Print the second half of a string.
 * @str: The input string.
 */
void puts_half(char *str)
{
    int full_length = 0;
    int half_length;
    int i = 0;

    // Calculate the length of the input string
    while (str[full_length] != '\0')
    {
        full_length++;
    }

    // Calculate the starting index for the second half
    half_length = (full_length + 1) / 2;

    // Print the second half of the string
    while (i < half_length)
    {
        _putchar(str[i + half_length]);
        i++;
    }

    _putchar('\n');
}
