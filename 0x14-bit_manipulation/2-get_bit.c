#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index.
 *
 * @n: Unsigned long int.
 * @index: Index of the bit.
 *
 * Return: the value of the bit at index index
 * or -1 if an error occured.
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	if (n == 0 && index < 64)
		return (0);

	for (b = 0; b <= 63; n >>= 1, b++)
	{
		if (index == b)
		{
			return (n & 1);
		}
	}

	return (-1);
}
