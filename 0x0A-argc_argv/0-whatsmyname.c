#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argv: array of strings containing the arguments
 * @argc: the number of arguments
 * Description: Prints the name of the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
