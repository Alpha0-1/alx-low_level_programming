#include "main.h"
/**
 * print_number - prints an integer using _putchar
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
	putchar('-');
	num = -n;
	}
	else
	{
	num = n;
	}

	if (num / 10)
	print_number(num / 10);

	putchar(num % 10 + '0');
}

