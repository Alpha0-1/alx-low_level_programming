#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - Prints an integer to the standard output.
 * @n: The integer to be printed.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
	putchar('-');
	n1 = -n;
	}
	if (n1 / 10 != 0)
	{
	print_number(n1 / 10);
	}
	putchar((n1 % 10) + '0');
}

