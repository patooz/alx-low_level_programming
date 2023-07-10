#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: NULL terminated string
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * if text_content is NULL, do nothing
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, j;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	j = open(filename, O_WRONLY | O_APPEND);
	if (j == -1)
		return (-1);
	write(j, text_content, i);
	return (1);
}
