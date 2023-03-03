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
	int divisor = 1;
	int num_digits = 1;

	if (n < 0)
	{
	putchar('-');
	n = -n;
	}

	while (n / divisor >= 10)
	{
	divisor *= 10;
	num_digits++;
	}

	while (num_digits > 0)
	{
	putchar(n / divisor + '0');
	n %= divisor;
	divisor /= 10;
	num_digits--;
	}
}
