#include "main.h"

/**
 * puts2 - prints every other character of a string, starting wiht the
 * first character, followed by a new line
 * @str: is the string parameter to print
 *
 * Return: return is void
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; *str != '\0' ; i++)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
