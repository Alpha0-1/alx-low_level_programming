#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array to be created.
 * @c: the char to initialize the array with.
 *
 * Return: a pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
	position = 0;
	while (position < size)
	{
		*(buffer + position) = c;
		position++;
	}
	return (buffer);
	}
}
