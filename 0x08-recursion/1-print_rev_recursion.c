#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: Pointer to the string to be printed in reverse
 * Description: This function prints a given string
 * recursively in reverse by calling the function
 * again with the rest of the string
 * until it reaches the end of the string, and then printing
 * each character on the way back up the recursive stack.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
