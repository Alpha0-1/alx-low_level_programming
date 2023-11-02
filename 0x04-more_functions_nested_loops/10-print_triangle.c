#include "main.h"
#include <stdlib.h>
/**
 * print_triangle - prints a triangle using '#' character of a given size
 * @size: size of the triangle to print
 * Return: void
 */
void print_triangle(int size)
{
	int al, ph, ae;

	if (size <= 0)
	{
	putchar('\n');
	}

	else
	{
	for (ph = 0; ph <= (size - 1); ph++)
	{
	for (al = 0; al < (size - 1) - ph; al++)
	{
	putchar(' ');
	}
	for (ae = 0; ae <= ph; ae++)
	{
	putchar('#');
	}
	putchar('\n');
	}
	}
}

