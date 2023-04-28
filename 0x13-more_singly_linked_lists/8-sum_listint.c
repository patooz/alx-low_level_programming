#include "lists.h"

/**
 * sum_listint - returns the sum of data of alist
 * @head: head node
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head != 0)
	{
		add = add + head->n;
		head = head->next
	}
	return (add);
}
