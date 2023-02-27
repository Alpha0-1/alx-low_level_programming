#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * followed by a new line.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements to print.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n  - 1)
		printf("%d, ", a[inc]);
		else
		printf("%d", a[inc]);
	}

	putchar(10);
}
