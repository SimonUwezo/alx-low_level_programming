#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 *
 * @array: An array
 * @size: Array size
 * @action: pointer to the function you need to use
 * Return:Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
