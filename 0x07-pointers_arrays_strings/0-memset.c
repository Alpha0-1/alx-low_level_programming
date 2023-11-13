#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory area to be filled.
 * @b: the constant byte to be filled n memory.
 * @n: the number of bytes to be filled.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
