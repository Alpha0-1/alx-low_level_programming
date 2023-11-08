#include "main.h"

/**
 * string_toupper - Convert all lowercase letters of a string to uppercase
 *
 * @str: Pointer to the string to convert
 *
 * Return: Pointer to the converted string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;

	index++;
	}

	return (str);
}
