#include "main.h"
/**
 * _islower - Test the _islower function
 *
 * @c: Number to pass to _islower function
 *
 * Return : 1 (success), otherwise 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0); }
