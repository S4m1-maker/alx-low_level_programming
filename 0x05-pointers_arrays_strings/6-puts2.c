#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: is the pointer parameter
*
* Return: success when the program executes
*/

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(*str++);
		str++;
	}
	_putchar('\n');
}
