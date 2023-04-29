#include "lists.h"

/**
 * find_listint_loop - findss the loop in list
 * @head: pointer ti the head node
 *
 * Return: address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *high = head;
	listint_t *low = head;

	while (low && high && high->next)
	{
		low = low->next;
		high = high->next->next;
		if (low == high)
			return (low);
	}
	return (NULL);
}
