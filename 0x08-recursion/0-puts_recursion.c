#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: Pointer to the string to be printed
 *
 * Description: This function prints a given string recursively by
 * printing the first character and calling the function
 * again with the rest of the string until it reaches the
 * end of the string.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n');
}
