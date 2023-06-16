#include "main.h"

/**
* _strchr - locates a charater in a string
* @s: is the pointer string to check
* @c: is the char to locate
*
* Return: returns s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
