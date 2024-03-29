#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the
 * beginning of a dlistint_t list.
 *
 * @head: pointer to the head of the dlistint_t list.
 * @n: An int for the new node to contain.
 *
 * Return: If the function fails - NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
