#include "lists.h"

/**
 * free_listint_safe - frees list with a loop
 * @h: pointet to the head node of the list
 * Return: freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *k = 0;
	size_t i, nodes;

	nodes = 0;
	while (*h != NULL)
	{
		nodes++;
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			break;
		}
		k = (*h)->next;
		free(*h);
		*h = k;
	}
	return (nodes);
}
