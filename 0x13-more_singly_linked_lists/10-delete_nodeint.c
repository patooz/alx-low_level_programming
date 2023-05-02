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
	listint_t *ptr;
	listint_t *temp;

	ptr = malloc(sizeof(listint_t));
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
