#include "lists.h"

/**
 * add_node - adds a new node at the beginnign of a list
 * @head: head of the list
 * @str: string of the list
 * Return: address of the element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int l = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = strdup(str);
	while (str[l] != '\0')
	{
		l++;
	}
	ptr->len = l
		if (*head != NULL)
			ptr->next = *head;
	if (*head == NULL)
		ptr->next = NULL;
	*head = ptr;
	return (*head);
}
