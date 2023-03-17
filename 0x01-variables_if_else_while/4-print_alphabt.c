#include <stdio.h>

/**
 * main - Entry point
 * Description:print alphabets except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az == 'e' || az == 'q')
			continue;
		putchar(az);
	}
	putchar('\n');
	return (0);
}
