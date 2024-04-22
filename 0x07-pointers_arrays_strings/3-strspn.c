#include "main.h"

/**
 * _strspn - counts the length of a prefix substring
 * @s: is the string parameter to calculate
 * @accept: is the string parameter of characters to count in s
 *
 * Return: returns the number of bytes in the intial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count = 0;

	while (*s)
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
			i++;
		}
		s++;
	}

	return (count);
}
