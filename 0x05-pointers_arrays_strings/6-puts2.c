#include "main.h"
/**
 * puts2 - Prints every other character of a string.
 *
 * @str: Pointer to the string to be printed.
 *
 * Description: This function takes a pointer to a string and
 * prints every other character of the string, starting with the
 * first character, followed by a new line.
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
	putchar(str[i]);
	}

	putchar('\n');
}
