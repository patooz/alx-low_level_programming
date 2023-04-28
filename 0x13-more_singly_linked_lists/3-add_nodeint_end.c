#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: head of the singly list
 * @n: number of nodes
 * Return: address of the new element, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	liistint_t *t;

	p = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = p;
	return (p);
}
