#include "lists.h"

/**
 * add_nodeint - adds a node at thr beggining of the list
 * @head: head of the list
 * @n: number of nodes
 *
 * Return: address of thr new element, NULL of it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
