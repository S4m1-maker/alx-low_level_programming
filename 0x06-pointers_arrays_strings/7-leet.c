#include "main.h"

/**
* *leet - encodes a string into 1337
* @str: is the pointer parameter to encode
*
* Return: returns str when the program is successful
*/

char *leet(char *str)
{
	int i, j;
	char *code = "4433007711";
	char *c = "aAeEoOtTlL";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (c[j])
		{
			if (c[j] == str[i])
			{
				str[i] = code[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
