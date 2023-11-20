#include "lists.h"

/**
 * sum_listint - function that returns the nth node of
 * a listint_t linked list.
 *
 * @head: The head of the list
 *
 * Return: If the node does not exist, return NULL.
 */
int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
