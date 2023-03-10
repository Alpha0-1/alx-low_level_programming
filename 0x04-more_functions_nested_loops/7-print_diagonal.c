#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times the character '' should be printed
 * Description: This function prints a diagonal line using the
 * '' character a specified number of times. If n is 0 or less,
 * the function only prints a newline character.
 */
void print_diagonal(int n)
{

	int co, sp;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (co = 1; co <= n; co++)
	{
	for (sp = 1; sp < co; sp++)
	{
	putchar(' ');
	}
	putchar('\\');
	putchar('\n');
	}
	}
}
