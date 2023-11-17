#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int total = 0;

	if (argc > 0)
	{
		while (total < argc)
		{
			printf("%s\n", argv[total]);
			total++;
		}
	}

	return (0);
}
