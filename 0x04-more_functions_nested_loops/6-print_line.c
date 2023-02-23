#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{

	int i;

	if (n <= 0)
	{
	putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
	putchar('_');
	}

	putchar('\n');
}

