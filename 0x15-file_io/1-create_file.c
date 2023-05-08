#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, j;

	if (filename == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	j = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (j == -1)
		return (-1);
	write(j, text_content, i);
	return (1);
}
