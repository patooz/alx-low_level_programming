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


	while (head != NULL)
	{
		k = head;
		heaad = head->next;
		i++;
		printf("[%p] %d\n", (void *)k, k->n);
		if (k <= head)
			break;
	}
	return (i)
}
