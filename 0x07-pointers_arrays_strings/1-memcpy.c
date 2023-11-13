#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the memory area to copy to.
 * @src: pointer to the memory area to copy from.
 * @n: the number of bytes to copy.
 *
 * Return: a pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	const char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
