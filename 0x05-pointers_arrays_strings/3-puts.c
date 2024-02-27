#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: is the pointer parameter to print
 *
 * Return: return is void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; *str != '\0' ; i++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
