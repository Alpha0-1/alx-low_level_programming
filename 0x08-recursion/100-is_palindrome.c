#include "main.h"
#include "string.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the first character of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	if (s == NULL)
		return (0);

	len = strlen(s);

	if (len <= 1)
		return (1);

	if (*s != *(s + len - 1))
		return (0);

	s++;
	*(s + len - 3) = '\0';
	return (is_palindrome(s));
}
