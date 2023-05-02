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
	int j;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			k = (*h)->mext;
			free(*h);
			*h = k;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
