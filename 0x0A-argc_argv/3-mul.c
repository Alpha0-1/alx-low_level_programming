#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}
