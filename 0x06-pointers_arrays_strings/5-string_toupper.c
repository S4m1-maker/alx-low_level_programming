#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to
 * uppercase
 * @str: is the string parameter
 *
 * Return: returns a pointer to the string str
 */

char *string_toupper(char *str)
{
	int i, lowr1 = 'a', lowr2 = 'z', uppConv = 32;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= lowr1 && str[i] <= lowr2)
		{
			str[i] = str[i] - uppConv;
		}
	}

	return (str);
}
