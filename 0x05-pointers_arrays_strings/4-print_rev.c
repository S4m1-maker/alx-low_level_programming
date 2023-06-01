#include "main.h"

/**
* print_rev - prints an a string in reverse
* @s: is the parameter to print
*
* Return: success when the program executes
*/

void print_rev(char *s)
{
	int str = 0;
	int i;

	while (*s != '\0')
	{
		str++;
		s++;
	}

	s--;
	for (i = str ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
