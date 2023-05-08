#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: name of the file
 * @letters: letters in the test file
 * Return: 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j, k;
	char *m;

	m = malloc(letters);
	if (m == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		free(m);
		return (0);
	}
	j = read(i, m, letters);
	k = write(STDOUT_FILENO, m, j);
	close(i);
	return (k);
}
