#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts anew nod at a given index
 * @h: head pointer
 * @n: value of the node
 * @idx: index of the list
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *i = NULL;
	dlistint_t *j;
	unsigned int k = 1;

	if (idx == 0)
		i = add_dnodeint(h, n);
	else
	{
		j = *h;
		if (j != NULL)
			while (j->prev != NULL)
				j = j->prev;
		while (j != NULL)
		{
			if (k == idx)
			{
				if (j->next == NULL)
					i = add_dnodeint_end(h, n);
				else
				{
					i = malloc(sizeof(dlistint_t));
					if (i != NULL)
					{
						i->n = n;
						i->next = j->next;
						i->prev = j;
						j->next->prev = i;
						j->next = i;
					}
				}
				break;
			}
			j = j->next;
			k++;
		}
	}
	return (i);
}
