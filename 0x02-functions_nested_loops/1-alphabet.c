#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase
*
* Return: returns void
*/

void print_alphabet(void)
{
	int c = 'a';

	while (c < 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');
}
