#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: return is void
 */

void more_numbers(void)
{
	int i, j, line = 10;

	for (i = 0 ; i < line ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
