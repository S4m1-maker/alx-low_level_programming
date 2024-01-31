#include "main.h"

/**
 * times_table - prints the 9 times table, starting with zero
 *
 * Return: return is void
 */

void times_table(void)
{
	int i, j, k, n = 9;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			k = i * j;
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
