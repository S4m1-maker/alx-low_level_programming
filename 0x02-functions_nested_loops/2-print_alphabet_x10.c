#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase,
 * followed by a new line
 *
 * Return: return is void
 */

void print_alphabet_x10(void)
{
	char alph, lineNum = 0;

	while (lineNum < 10)
	{
		for (alph = 'a' ; alph <= 'z' ; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		lineNum++;
	}
}
