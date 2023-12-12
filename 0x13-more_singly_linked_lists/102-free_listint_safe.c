#include "lists.h"
#include <stdio.h>

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
 * looped_listint_count - counts the number of nodes in a looped listint_t list
 * @head: pointer to the head of the list
 *
 * Description: This function counts the number
 * of nodes in a looped listint_t list.
 * It uses Floyd's cycle detection algorithm
 * to detect if the list is looped.
 * If the list is looped, it counts the number of nodes in the loop.
 *
 * Return: the number of nodes in the looped list,
 * or 0 if the list is not looped
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to pointer to the head of the list
 * This function frees a listint_t list safely to avoid memory leaks.
 * It goes through the list only once, and sets the head to NULL after freeing.
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;

	return (nodes);
}

