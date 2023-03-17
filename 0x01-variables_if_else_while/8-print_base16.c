#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		purchar(i);
	putchar('\n');
	return (0);
}
