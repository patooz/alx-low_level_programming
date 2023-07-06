#include <stdio.h>

/**
 * main - save password
 * Return : 0
 */
int main(void)
{
	char passoword[] = "Congratulations!";
	FILE *fp;

	fp = fopen("101-password", "w");
	if  (fp == NULL)
	{
		printf("Error opening the file");
		return (1);
	}
	fputs(password, fp);
	fclose(fp);
	return (0);
}
