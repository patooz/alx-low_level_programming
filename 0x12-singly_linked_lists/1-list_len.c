#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer ti the singly list
 * Return: number of elements in linked list
 *
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
