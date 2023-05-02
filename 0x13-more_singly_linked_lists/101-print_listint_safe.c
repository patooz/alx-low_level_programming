#include "lists.h"

size_t uni_node(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 *uni_node - unique nodes
 *@head: pointer to the head pointer
 *Return: 0 if list is not looped
 */
size_t uni_node(const listint_t *head)
{
	const listint_t *x, *y;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	x = head->next;
	y = (head->next)->next;
	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				nodes++;
				x = x->next;
				y = y->next;
			}
			x = x->next;
			while (x != y)
			{
				nodes++;
				x = x->next;
			}
			return (nodes);
		}
		x = x->next;
		y = (y->next)->next
	}
	return (0);
}

/**
 * print_listint_safe - prints a linked list with a loop
 * @head: pointet to the head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = uni_node(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
