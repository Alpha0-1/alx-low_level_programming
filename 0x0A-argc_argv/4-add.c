#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks for presence of digits
 * @str: array string
 *
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int total;

	total = 0;
	while (total < strlen(str))
	{
		if (!isdigit(str[total]))
		{
			return (0);
		}
		total++;
	}

	return (1);
}
/**
 * main - entry point of the program
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
