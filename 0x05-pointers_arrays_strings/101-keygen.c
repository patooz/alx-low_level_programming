#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * randomPass: randomly generates password
 * @N: lenght of random characters
 * Return: random password
 */
void randomPass(int N)
{
	int i = 0, random = 0;

	srand((unsigned int) (time(NULL)));
	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTERS[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[N];

	random = rand() % 4;
	for (i = 0; i < N; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 2)
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random == 3)
		{
			password[i] = LETTERS[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letters[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
int main(void)
{
	int N = 10;

	randomPass(N);
	return (0);
}
