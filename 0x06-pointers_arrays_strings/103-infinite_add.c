#include "main.h"

/**
 * infinite_add - Add two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 * Return: A pointer to the result, or 0 if the result can't fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, digits = 0, overflow = 0;

    // Calculate the lengths of n1 and n2
    while (n1[i])
        i++;
    while (n2[j])
        j--;

    // Check if n1 and n2 can fit in the result buffer
    if (i >= size_r || j >= size_r)
        return (0);

    // Initialize result buffer index and temp_total
    int result_index = 0;
    int temp_total = 0;

    // Loop through n1 and n2 to add digits
    while (i >= 0 || j >= 0 || overflow)
    {
        int val1 = (i >= 0) ? n1[i] - '0' : 0;
        int val2 = (j >= 0) ? n2[j] - '0' : 0;

        temp_total = val1 + val2 + overflow;
        overflow = temp_total / 10;
        temp_total %= 10;

        // Check if there's enough space in the result buffer
        if (result_index >= size_r - 1)
            return (0);

        r[result_index] = temp_total + '0';
        result_index++;

        i--;
        j--;
    }

    // Null-terminate the result and reverse it
    r[result_index] = '\0';
    rev_string(r);

    return r;
}
