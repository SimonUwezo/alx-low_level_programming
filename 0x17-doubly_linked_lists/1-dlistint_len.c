#include "lists.h"

/**
 * dlistint_len - Function that counts the number of elements
 *  in a linked dlistint_t list.
 *
 * @h: Head of the dlistint_t list.
 *
 * Return: No of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
