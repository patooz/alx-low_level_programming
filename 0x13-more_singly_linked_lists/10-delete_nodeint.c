#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at inex
 * @head: head node
 * @index: index of the node
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p;
	listint_t *t;

	p = malloc(sizeof(listint_t));
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
		return (1);
	}
	t = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (t->next == NULL)
			return (-1);
		t = t->next;
	}
	p = t->next;
	t->next = p->next;
	free(p);
	return (1);
}
