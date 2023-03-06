#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string to search for character c.
 * @c: character to be located.
 *
 * Return: a pointer to the first occurence of the character c
 * in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0', index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
