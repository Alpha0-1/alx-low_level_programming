#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: First string to be compared
 *
 * @s2: Second string to be compared
 *
 * Description: This function compares the two strings s1 and s2.
 * It returns an integer greater than, equal to, or less than zero
 * if s1 is greater than, equal to, or less than s2 respectively.
 * Comparison is done byte by byte using the ASCII values of the
 * corresponding characters in each string.
 *
 * Return: Integer greater than, equal to, or less than zero
 * if s1 is greater than, equal to, or less than s2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
