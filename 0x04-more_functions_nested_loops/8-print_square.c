#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the parameter size of the square
 *
 * Return: return is void
 */

void print_square(int size)
{
	int i, j;
	char c = '#';

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
