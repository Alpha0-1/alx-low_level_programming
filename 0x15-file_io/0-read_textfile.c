#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints the output to stdout
 * @filename: a pointer to the address of the file
 * @letters: a pointer to the value representing number of
 * characters printed by the function
 *
 * Return: 0 upon failure or if the function returns NULL
 * else the number of bytes the function prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
