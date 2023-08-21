#include "main.h"
#include <unistd.h>

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Description: This function prints an integer to the
 * standard output using only the _putchar function.
 */
void print_number(int n)
{
	int divisor = 1;
	int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	while (num / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		putchar(num / divisor + '0');
		num %= divisor;
		divisor /= 10;
	}
}
