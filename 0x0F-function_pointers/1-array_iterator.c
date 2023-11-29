#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 *
 * @array: Pointer to an array of integers
 * @size: The size of the array
 * @action: Pointer to a function that takes an int argument and returns void
 *
 * This function takes an array of integers, its size, and a function pointer
 * as arguments. It calls the function pointed to by action for each element of
 * the array, passing it the element as an argument.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
