#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: head of the node
 * @str: string of the list
 * Return: address of the new element NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *b;
	size_t i;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	a->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	a->len = i;
	a->next = NULL;
	b = *head;
	if (b == NULL)
	{
		*head == a;
	}
	else
	{
		while (b->next != NULL)
			b = b->next;
		b->next = a;
	}
	return (*head);
}
