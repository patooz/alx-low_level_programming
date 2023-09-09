#include "lists.h"

/**
 * pop_listint - deletes head nod of list
 * @head: head ofnode of the list
 * Return: 0 if limked list id empty
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (*head == NULL)
		return (0);
	p = *head;
	*head = p->next;
	n = p->n;
	free(p);
	return (n);
}
