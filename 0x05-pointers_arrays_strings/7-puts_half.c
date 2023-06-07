#include "main.h"

/**
*puts_half - prints half of the string
*
*@str: is the parameter of the function
*
*Return: success when the program executes
*/

void puts_half(char *str)
{
	int i;
	char n;
	int count = 0;

	i = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	n = ((count - 1) / 2);
	for (i = n ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
