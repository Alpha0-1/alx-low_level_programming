#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 * separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long long int fib[50];

	fib[0] = 1;
	fib[1] = 2;


	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < 49; i++)
	{
		printf("%llu, ", fib[i]);
	}


	printf("%llu\n", fib[49]);

	return (0);
}

