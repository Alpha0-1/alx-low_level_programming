#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - identifies the first word of a string
 * @str: string to be searched
 *
 * Return: integer representing position of first word
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}
/**
 * count_words - counts number of words within a string
 * @str: strings to be searched
 *
 * Return: the number of words contained within the string
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
	if (*(str + index) != ' ')
	{
		words++;
		index += word_len(str + index);
	}
	}
	return (words);
}

/**
 * strtow - function that splits a string into words.
 * @str: string to split into words.
 * Return: pointer to an array of strings (words).
 * Each element of this array should contain a single word, null-terminated.
 * The last element of the returned array should be NULL.
 * If str == NULL or str == "", returns NULL.
 *  If the function fails, it should return NULL.
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
		for (; w >= 0; w--)
			free(strings[w]);

		free(strings);
		return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}

