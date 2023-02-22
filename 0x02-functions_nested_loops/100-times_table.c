#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the highest number to multiply by
 *
 * Description: This function prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0
 * the function should not print anything.
 * The function should take an integer parameter n
 * and print a table with n + 1 rows and columns.
 * The top left cell should be blank,
 * and the row and column headers should contain the numbers
 * from 0 to n. Each cell should contain the
 * product of the row and column header numbers.
 */
void print_times_table(int n)
{

	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
		_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
		_putchar(',');
		_putchar(' ');
		prod = num * mult;
		if (prod <= 99)
		_putchar(' ');
		if (prod <= 9)
		_putchar(' ');
		if (prod >= 100)
		{
		_putchar((prod / 100) + '0');
		_putchar((prod / 10) % 10 + '0');
		}
		else if (prod <= 99 && prod >= 10)
		{
		_putchar((prod / 10) + '0');
		}
		_putchar((prod % 10) + '0');
		}
		_putchar('\n');
		}
		}
}

