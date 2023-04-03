#include "lists.h"

/**
 * find_listint_loop - finds the node where a loop starts in a linked list
 * @head: pointer to the head of the list
 *
 * Description: This function finds the node where a loop
 * starts in a linked list using Floyd's cycle detection algorithm.
 * It returns the address of the node where the loop starts,
 * or NULL if there is no loop in the list.
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (NULL);
}
