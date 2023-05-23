#include "main.h"

/**
* print_alphabet_x10 - prints 10x the alphabet in lowercase
*
* Return: returns void
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j++);
		}
		i++;
		_putchar('\n');
	}
}
