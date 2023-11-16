#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to the list.
 *
 * Return: No of nodes.
 * @return size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* while we have a pointer to list */
	while (h != NULL)
	{
		/* dereference pointer and check if str is null */
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else /* if not NULL */
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
