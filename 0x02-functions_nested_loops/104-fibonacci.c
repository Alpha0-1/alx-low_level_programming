#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	unsigned int n = 98;
	unsigned int fib1 = 1, fib2 = 2, next_fib;
	unsigned int i;

	printf("%u, %u", fib1, fib2);
	for (i = 2; i < n; i++)
	{
	next_fib = fib1 + fib2;
	printf(", %u", next_fib);
	fib1 = fib2;
	fib2 = next_fib;
	}
	printf("\n");

	return (0);
}
