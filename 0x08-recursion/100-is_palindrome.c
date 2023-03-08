#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: Pointer to the first character of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len, i;

	if (s == NULL)
	return (0);

	len = 0;
	while (s[len] != '\0')
	len++;

	for (i = 0; i < len / 2; i++)
	{
	if (s[i] != s[len - i - 1])
	return (0);
	}

	return (1);
}
