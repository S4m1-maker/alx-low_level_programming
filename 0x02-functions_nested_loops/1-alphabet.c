#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new
 * line
 *
 * Return: return is void
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
