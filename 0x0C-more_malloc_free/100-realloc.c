#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: sixe in bytesold_size
 * @new_size: new size, in bytes of the new memory block
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	char *s;
	int i;

	s = malloc(sizeof(char) * 10);
	s = _realloc(s, sizeof(char) * 10, sizeof(char) * 98);
	i = 0;
	while (i < 98)
		s[i++] = 98;
	simple_print_buffer(s, 98);
	free(s);
	return (0);
}
