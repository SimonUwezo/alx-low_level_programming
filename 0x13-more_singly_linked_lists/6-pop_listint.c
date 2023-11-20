#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * node of a listint_t.
 *
 * @head: A pointer to the address.
 * Return:  if list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
