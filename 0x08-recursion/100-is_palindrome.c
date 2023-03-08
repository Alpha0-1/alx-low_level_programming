#include "main.h"
#include "string.h"
/**
 * _strlen_recursion - size
 * @s: pointer to string parameter
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * p1 - palindrome
 * @s: pointer to a string
 * @l: position
 * Return: a boolean type.
 */
int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the first character of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
