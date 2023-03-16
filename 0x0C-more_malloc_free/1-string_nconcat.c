#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Description: This function concatenates s1 and the first n bytes of s2
 * into a newly allocated space in memory.
 * Return: NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int len1 = 0, len2 = 0, a, b;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;

	if (n >= len2)
	n = len2;

	nstr = malloc(sizeof(char) * (len1 + n + 1));

	if (nstr == NULL)
	return (NULL);

	for (a = 0; a < len1; a++)
	nstr[a] = s1[a];
	for (b = 0; b < n; b++)
	nstr[len1 + b] = s2[b];
	nstr[len1 + n] = '\0';

	return (nstr);
}

