#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: Array of integers
 *
 * @n: Number of elements in the array
 *
 * Description: This function reverses the order of the elements
 * in the array a. It swaps the first element with the last element,
 * the second element with the second-to-last element, and so on,
 * until the middle of the array is reached.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}

