#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Destination string
 *
 * @src: Source string to be appended to dest
 *
 * Description: This function concatenates two strings by
 * appending the src string to the end of dest. The terminating
 * null byte (\0) at the end of dest is overwritten, and a new
 * terminating null byte is added to the end of the resultin
 * string.
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
