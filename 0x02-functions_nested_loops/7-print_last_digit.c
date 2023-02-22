#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer input number to evaluate
 *
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0); }
