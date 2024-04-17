#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: is the string parameter
 * @c: is the character to locate
 *
 * Return: return a pointer to s or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
