#include "lists.h"

/**
 * print_listint_safe - prints a linked list with a loop
 * @head: pointet to the head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *k;
	size_t i = 0;

	k = head;
	while (head != NULL)
	{
		i++;
		printf("[%p] %d\n", (*void *)k, k->n);
		k = k->next;
		if (k >= head && k != NULL)
		{
			printf("-> [%p] %d\n", (void *)k, k->n);
			break;
		}
	}
	return (i);
}
