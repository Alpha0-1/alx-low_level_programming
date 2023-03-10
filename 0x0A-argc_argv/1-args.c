#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the number of arguments passed into the program
 * @argc: Number of arguments passed
 * @argv: An array of strings containing arguments to be passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
