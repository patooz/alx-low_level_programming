#include <stdio.h>

/**
 * main - Store password
 * Return: 0
 */
int main(void)
{
	char password[] = "Congratulations!";

	FILE *fp;
	fp = fopen("101-password", "w");

	if (fp == NULL)
	{
		printf("Error opening file");
		return (1);
	}
	fputs(password, fp);
	fclose(fp);
	return (0);
}
