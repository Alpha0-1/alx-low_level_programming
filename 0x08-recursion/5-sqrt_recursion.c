#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to calculate the square root of
 *
 * Return: integer square root of n
 *         -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0 || n == 1)
	return (n);
	else
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function to recursively calculate square root
 * @n: integer to calculate the square root of
 * @i: integer to test as potential square root
 *
 * Return: integer square root of n
 *         -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	return (i);
	else if (i * i > n)
	return (-1);
	else
	return (sqrt_helper(n, i + 1));
}

