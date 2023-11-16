#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements
 * of a list_t list.
 * @h: pointer to the head.
 *
 * Return: No of elements in a list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
