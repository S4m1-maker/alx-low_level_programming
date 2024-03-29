#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of times to print
 *
 * Return: return is void
 */

void print_diagonal(int n)
{
	int i, j, c = 92, a = 32;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			_putchar(a);
		}
		_putchar(c);
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
