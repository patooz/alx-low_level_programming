#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head node
 *
 * Return: pointet to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listsint_t *p = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}
	*head = p;
	return (*head);
}
