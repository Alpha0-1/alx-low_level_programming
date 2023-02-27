#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int in = 0;

	while (*(src + in) != '\0')
	{
		*(dest + in) = *(src + in);
		in++;
	}
	*(dest + in) = '\0';

	return (dest);
}
