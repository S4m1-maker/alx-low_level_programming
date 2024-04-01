#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: is the string parameter to encode
 *
 * Return: returns a pointer to the string parameter
 */

char *leet(char *str)
{
	int i, j;
	char *c = "aAeEoOtTlL";
	char *leet = "4433007711";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (c[j])
		{
			if (c[j] == str[i])
				str[i] = leet[j];
			j++;
		}
		i++;
	}

	return (str);
}
