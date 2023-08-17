#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head pointer
 * @n: element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *j;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;
	j = *head;
	if (j != NULL)
	{
		while (j->next != NULL)
			j = j->next;
		j->next = i;
	}
	else
		*head = i;
	i->prev = j;
	return (i);
}
