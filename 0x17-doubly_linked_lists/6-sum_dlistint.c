#include "lists.h"

/**
 * sum_dlistint - A function that sums all the data.
 * @head: The head.
 *
 * Return: Sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
