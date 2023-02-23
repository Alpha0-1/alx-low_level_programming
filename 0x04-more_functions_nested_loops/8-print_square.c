#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square using the '#' character
 * @size: size of the square to be printed
 * Description: This function prints a square using the '#' character
 * with the size specified by the parameter 'size'. If the size is 0 or
 * less, the function only prints a newline character.
 */
void print_square(int size)
{

	int co, ro;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (co = 1; co <= size; co++)
	{
	putchar('#');

	for (ro = 2; ro <= size; ro++)
	{
	putchar('\n');
	}
	}
	}
}
