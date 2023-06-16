#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches for a string for any set of bytes
* @s: is the pointer string to search
* @accept: is the pointer string to for search
*
* Return: return s
*/

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (0);
}
