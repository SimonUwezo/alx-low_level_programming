#include "main.h"

/**
* _calloc - function that allocates memory
* for an array, using malloc.
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			b[i] = 0;
		return (b);
	}
	else
		return (NULL);
}
