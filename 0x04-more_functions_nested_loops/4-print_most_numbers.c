#include "main.h"

/**
* print_most_numbers - prints most numbers from 0 to 9
*
* Return: returns 0 when successful
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i = i + 1;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
