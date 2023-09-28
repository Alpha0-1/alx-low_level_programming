#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the unsigned long int where the bit will be cleared.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if the operation succeeded, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
