#include <stdio.h>

/**
 * main - Entry point
 * Description: print the aplhabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char al;


	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
