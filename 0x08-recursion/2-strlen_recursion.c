#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to the string whose length is to be determined
 * Return: The length of the string as an integer
 * Description: This function calculates the length of a given string
 *  recursively by incrementing a counter variable for each
 *   character until it reaches the end of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
