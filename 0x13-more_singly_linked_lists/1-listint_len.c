#include "lists.h"

/**
 * listint_len - returns number of elements in linked list
 * @h: pointer to rhe linked list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
