#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head node of the list
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head != NULL)
			head = head->next
	}
	return (head);
}
