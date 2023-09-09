#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at inex
 * @head: head node
 * @index: index of the node
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p = NULL;
	listint_t *t = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (i < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		i++;
	}
	p = t->next;
	t->next = p->next;
	free(p);
	return (1);
}
