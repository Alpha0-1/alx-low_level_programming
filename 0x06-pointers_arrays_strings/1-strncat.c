#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit
 *
 * @dest: Destination string
 *
 * @src: Source string to be appended to dest
 *
 * @n: Maximum number of bytes to be used from src
 *
 * Description: This function concatenates two strings by
 * appending the src string to the end of dest, but it limits the
 * number of bytes that will be used from src to n. The terminating
 * null byte (\0) at the end of dest is overwritten, and a new
 * terminating null byte is added to the end of the resulting
 * string. If src contains n or more bytes, it does not need to be
 * null-terminated.
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
