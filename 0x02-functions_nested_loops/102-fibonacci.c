#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma and a space, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i;
	long fib1 = 1, fib2 = 2, fib;

	printf("%ld, %ld", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
	fib = fib1 + fib2;
	printf(", %ld", fib);
	fib1 = fib2;
	fib2 = fib; }
	printf("\n");
	return (0);
}
