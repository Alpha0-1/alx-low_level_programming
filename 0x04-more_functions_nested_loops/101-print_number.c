#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num, div = 1;

	if (n < 0)
	{
	putchar('-');
	num = -n;
	}
	else
	{
	num = n;
	}

	while (num / div > 9)
	div *= 10;

	while (div != 0)
	{
	putchar(num / div + '0');
	num %= div;
	div /= 10;
	}
}

