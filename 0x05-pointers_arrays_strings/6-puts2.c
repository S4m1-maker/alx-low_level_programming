#include "main.h"

/**
*puts2 - prints every other char of a string
*
*@str: is the parameter of the function
*
*Retrun: success when the program executes
*/

void puts2(char *str)
{
	int i;
	int count = 0;
	int t = 0;
	char *p = str;

	while (*p != '\0')
	{
		p++;
		count++;
	}
	t = count - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
