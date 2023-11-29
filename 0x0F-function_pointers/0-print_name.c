#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: The name to be printed
 * @f: Pointer to a function that takes a char * argument and returns void
 *
 * This function takes a name and a function pointer as arguments. It calls
 * the function pointed to by f, passing it the name argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
