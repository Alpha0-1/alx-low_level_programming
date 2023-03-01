#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: Destination string
 *
 * @src: Source string to be copied
 *
 * @n: Maximum number of bytes to be copied from src
 *
 * Description: This function copies the first n bytes of the
 * source string to the destination string. If src contains less
 * than n bytes, the rest of dest is filled with null bytes. If
 * src contains n or more bytes, no null byte is implicitly
 * appended to the destination string.
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
