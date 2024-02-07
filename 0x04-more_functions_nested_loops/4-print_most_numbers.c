#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, except for
 * 2 and 4
 *
 * Return: return is void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (i == '2' || i == '4')
			i += 1;
		_putchar(i);
	}
	_putchar('\n');
}
