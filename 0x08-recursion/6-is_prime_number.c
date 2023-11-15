#include "main.h"
/**
 * prime_helper - helper function to recursively check for prime numbers
 * @n: integer to check
 * @i: integer to test as potential factor of n
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_helper(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	else if (n == 2)
	return (1);
	else if (n % 2 == 0)
	return (0);
	else
	return (prime_helper(n, 3));
}

/**
 * prime_helper - helper function to recursively check for prime numbers
 * @n: integer to check
 * @i: integer to test as potential factor of n
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_helper(int n, int i)
{
	if (i * i > n)
	return (1);
	else if (n % i == 0)
	return (0);
	else
	return (prime_helper(n, i + 2));
}
