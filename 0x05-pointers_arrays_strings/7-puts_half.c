#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: is the pointer parameter string to print
 *
 * Return: return is void
 */

void puts_half(char *str)
{
	int i, n, len;

	len = _strlen(str);
	n = (len / 2);
	for (i = n ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}

	if ((len % 2) != 0)
	{
		n = (len - 1) / 2;
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}



/**
 * _strlen - returns the length of a string
 * @s: is the string parameter to count
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0 ; *s != '\0' ; len++)
	{
		s++;
	}

	return (len);
}
