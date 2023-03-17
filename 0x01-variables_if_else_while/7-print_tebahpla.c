#include <stdio.h>

/**
 * main - Entry point
 * Description: print the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	int za;

	for (za = 'z'; za >= 'a'; za--)
		putchar(za);
	putchar('\n');
	return (0);
}
