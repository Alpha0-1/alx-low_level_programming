#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the first character of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *p1, *p2;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	p1 = s;
	p2 = s + len - 1;

	while (p2 > p1)
	{
		if (*p1 != *p2)
			return (0);
		p1++;
		p2--;
	}

	return (1);
}

