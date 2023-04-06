#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if it is little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
