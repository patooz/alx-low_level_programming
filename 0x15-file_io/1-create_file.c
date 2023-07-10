#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: Null terminated string to write thr file
 * Return: 1 on success, -1 on failure
 * if file id NULL, return -1
 * if text_content is NULL creat an empy file
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, j;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	j = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (j == -1)
		return (-1)
	write(j, text_content, i);
	return (1);
}
