#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: is the string parameter to print
 *
 * Return: return is void
 */

void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);
	for (i = len - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
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
