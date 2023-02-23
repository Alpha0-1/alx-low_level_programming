#include <stdlib.h>
#include <stdio.h>
/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @n: number to find the largest prime factor of
 * Return: largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long i;

	for (i = 2; i <= n; i++)
	{
	if (n % i == 0)
	{
	n /= i;
	i--;
	}
	}

	return (i);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
	long largest_factor;

	largest_factor = largest_prime_factor(num);

	printf("%ld\n", largest_factor);

	return (0);
}




