#include <stdio.h>
/**
 * main - entry point of the program
 * description: this program prints the name of the file
 * it was compiled from, followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("The current file is: %s\n", __FILE__);
	return (0);
}

