#include "main.h"
/**
 * rev_string - Reverses a string.
 *
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function takes a pointer to a string and
 * reverses the order of its characters.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char c;

	while (s[j] != '\0')
	{
	j++;
	}
	j--;

	while (i < j)
	{
	c = s[i];
	s[i] = s[j];
	s[j] = c;
	i++;
	j--;
	}
}
