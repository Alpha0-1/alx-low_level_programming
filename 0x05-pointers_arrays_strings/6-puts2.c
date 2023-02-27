#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts2 - Prints every other character of a string.
 * @str: string.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
	if (i % 2 == 0)
	putchar(*(str + i));
	i++;
	}

	putchar(10);
}
