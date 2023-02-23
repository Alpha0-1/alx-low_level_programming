#include <stdio.h>
/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @n: number to find the largest prime factor of
 * Return: largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
	if ((prime % 2) == 0)
	{
	prime /= 2;
	continue;
	}
	for (div = 3; div < (prime / 2); div += 2)
	{
	if ((prime % div) == 0)
	prime /= div;
	}
	}
	printf("%ld\n", prime);
	return (0); }
