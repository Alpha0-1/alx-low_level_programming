#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of parameters passed to the function.
 *
 * @...: variable number of arguments to sum up.
 *
 * Return: the sum of all parameters or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
