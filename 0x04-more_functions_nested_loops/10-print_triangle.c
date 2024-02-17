#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size parameter of the triangle
 *
 * Return: return is void
 */

void print_triangle(int size)
{
	int i, j, k;
	char c = '#', space = ' ';

	for (i = 1 ; i <= size ; i++)
	{
		for (j = size - i ; j >= 1 ; j--)
		{
			_putchar(space);
		}
		for (k = 1 ; k <= i ; k++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
