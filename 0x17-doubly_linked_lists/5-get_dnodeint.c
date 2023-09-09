#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node of a likned list
 * @head: head pointer tot the linked list
 * @index: node index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

		if (head == NULL)
			return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		if (x == index)
			break;
		head = head->next;
		x++;
	}
	return (head);
}
