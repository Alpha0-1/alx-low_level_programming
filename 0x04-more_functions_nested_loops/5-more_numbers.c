#include "main.h"
/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 */
void more_numbers(void)
{
	int i, bl;

	for (i = 0; i < 10; i++)
	{
	for (bl = 0; bl <= 14; bl++)
	{

	if (bl > 9)
		{
		putchar((bl / 10) + '0');
		}
		putchar((bl % 10) + '0');
	}
	putchar('\n');
	}
}
