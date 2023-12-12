#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list.
 * @head: Pointer to a pointer to the head node of the linked list.
 * @idx: Index of the position where the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if it failed to insert.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;

	return (new);
}
