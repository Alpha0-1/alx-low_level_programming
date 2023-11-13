#include "main.h"
/**
 * set_string - sets the values of a pointer to a char.
 * @s: the pointer that points to a char.
 * @to: the char that gets pointed at.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
