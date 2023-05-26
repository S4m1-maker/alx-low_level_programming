#include "main.h"

/**
* more_numbers - prints 10 times the numbers from 0 to 14
*
* Return: returns 0 when successful
*/

void more_numbers(void)
{
	int i = 0;
	int j;
	int n = 10;

	while (i < n)
	{
		j = 0;
		while (j <= 14)
		{
			if(j >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
