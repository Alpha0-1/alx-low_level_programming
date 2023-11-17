#include <stdio.h>
#include <stdlib.h>

/**
 * calculateCoins - calculates the minimum number of coins required
 * to make change for an amount of money
 * @cents: the amount of money in cents
 *
 * Return: the minimum number of coins required
 */
int calculateCoins(int cents)
{
	int coins = 0;

	while (cents >= 25)
	{
	cents -= 25;
	coins++;
	}

	while (cents >= 10)
	{
	cents -= 10;
	coins++;
	}

	while (cents >= 5)
	{
	cents -= 5;
	coins++;
	}

	while (cents >= 2)
	{
	cents -= 2;
	coins++;
	}

	coins += cents;

	return (coins);
}

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char **argv)
{
	int cents, coins;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	coins = calculateCoins(cents);

	printf("%d\n", coins);

	return (0);
}

