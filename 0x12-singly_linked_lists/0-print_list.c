#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *@s: singly list
 *Return - 0
 */
size_t print_list(const list_t *s)
{
	size_t i;

	i = 0;
	while (s != NULL)
	{
		if (s->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", s->len, s->str);
		s = s->next;
		i++;
	}
	return (i);
}
