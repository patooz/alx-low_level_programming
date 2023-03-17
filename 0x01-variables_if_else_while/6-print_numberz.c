#include <stdio.h>
/**
 * main - entry point
 * Description: print single digit numbres of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar((char)i);
	putchar('\n');
	return (0);
}
