#include "main.h"

/**
* _puts - prints an array of characters
* @str: is the parameter to print
*
* Return: success when the program executes
*/

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
