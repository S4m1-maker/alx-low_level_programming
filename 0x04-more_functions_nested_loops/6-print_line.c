#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is the parameter to print
 *
 * Return: return is void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		_putchar('_');
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
