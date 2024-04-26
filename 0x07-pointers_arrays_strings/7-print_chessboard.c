#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: is the 2d array parameter to print
 *
 * Return: return is void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
