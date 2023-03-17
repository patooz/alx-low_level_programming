#include <stdio.h>
/**
 * main - Entry point
 * Description: combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar((char)i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
