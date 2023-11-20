#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list
 *@head: A pointer to the head
 *
 *Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *cursor;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
