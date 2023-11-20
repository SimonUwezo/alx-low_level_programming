#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: A pointer to the head.
 * @idx: The index of the node.
 * @n: the address of the new node, or NULL if it failed.
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || idx > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = previous_node->next;
			previous_node->next = new_node;
			return (new_node);
		}
		else if ((i + 1) == idx)
			previous_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

/**
 * listint_len - counts the no of nodes
 * @h: The head
 *
 * Return: No of elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
