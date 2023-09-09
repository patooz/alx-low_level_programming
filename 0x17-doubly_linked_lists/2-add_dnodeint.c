#include "lists.h"

/**
 * add_dnodeint - adds a new node at the biginning
 * @head: pointer to the head
 * @n: element
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *j;

	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
		return (NULL);
	i->n = n;
	i->prev = NULL;
	j = *head;
	if (j != NULL)
	{
		while (j->prev != NULL)
			j = j->prev;
	}
	i->next = j;
	if (j != NULL)
		j->prev = i;
	*head = i;
	return (i);
}
