#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: lis pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((i = head) != NULL)
	{
		head = head->next;
		free(i);
	}
}
