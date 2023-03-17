#include <stdio.h>

/**
 * main - Entry point
 * Description: print lowercase alphabets and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char az;


	for (az = 'a'; az <= 'z'; az++)
		putchar(az);
	for (az = 'A'; az <= 'Z'; az++)
		putchar(az);
	putchar('\n');
	return (0);
}
