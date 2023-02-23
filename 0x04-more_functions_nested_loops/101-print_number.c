#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
	putchar('-');
	n = -n;
	}
	while (n / divisor > 9)
	{
	divisor *= 10;
	}
	while (divisor != 0)
	{
	putchar((n / divisor) + '0');
	n %= divisor;
	divisor /= 10;
	}
}
