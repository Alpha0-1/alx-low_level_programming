#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts the number of arrays
 * @s: array to be counted
 *
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}

	return (i);
}
/**
 * _strcpy - copies arrays
 * @src: aray of elements
 * @dest: dest array;
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string on success, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}
