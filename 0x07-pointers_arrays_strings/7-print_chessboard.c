#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: 2D array representing chessboard.
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int chss1, chss2;

	for (chss1 = 0; a[chss1][7]; chss1++)
	{
		for (chss2 = 0; chss2 < 8; chss2++)
			putchar(a[chss1][chss2]);

		putchar('\n');
	}
}
