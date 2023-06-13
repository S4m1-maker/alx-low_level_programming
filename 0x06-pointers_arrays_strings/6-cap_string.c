#include "main.h"

/**
* cap_string - capita;izes all words of a string
* @str: is the pointer parameter of the function
*
* Return: returns a pointer to char
*/

char *cap_string(char *str)
{
	int i;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		if (i == 0 ||
		str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
