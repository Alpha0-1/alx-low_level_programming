#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The integer for which the factorial needs to be calculated.
 * Return: The factorial of the integer n.
 * If n is less than 0, return -1 to indicate error
 * If n is 0, return 1 as factorial of 0 is 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
