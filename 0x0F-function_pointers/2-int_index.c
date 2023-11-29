#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 *
 * @array: Pointer to an array of integers
 * @size: The number of elements in the array
 * @cmp: Pointer to a function that takes an int argument and returns int
 *
 * This function takes an array of integers, its size, and a function pointer
 * as arguments. It searches the array for an element that satisfies the
 * comparison function pointed to by cmp.
 * If such an element is found, it returns its index.
 * If no element matches, or if size is less than or equal to zero,
 * it returns -1.
 *
 * Return: The index of the first element for which the cmp function does not
 *         return 0, or -1 if no such element is found or if size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
