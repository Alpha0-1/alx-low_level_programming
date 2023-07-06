#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number in which to clear the bit.
 * @index: The index of the bit to be cleared (starting from 0).
 *
 * Return: 1 if the operation is successful.
 *         -1 if an error occurred (if the index is out of range).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
