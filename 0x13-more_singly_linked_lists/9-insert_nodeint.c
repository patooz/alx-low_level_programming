#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head node
 * @idx: indexof the list
 * @n: parameter
 * Return: address of the new node, NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p;
	listint_t *t;

	p = malloc(sizeof(listint_t));
	t = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && t != NULL; i++)
		{
			t = t->next;
		}
	}
	if (t == NULL && idx != 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	p->n = n;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
	}
	else
	{
		p->next = t->next;
		t->next = p;
	}
	return (p);
}
