#include "lists.h"

/**
 * free_listint_safe - frees list with a loop
 * @h: pointet to the head node of the list
 * Return: freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *k;
	size_t i = 0;

	while (*h != NULL)
	{
		k = *h;
		*h = (*h)->next;
		i++;
		free(k);
		if (k <= *h)
			break;
	}
	return (i);
}
