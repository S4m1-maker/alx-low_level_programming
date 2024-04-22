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
	char *ptr = s;
	unsigned int count;

	while (ptr && _strchr(accept, *ptr))
	{
		ptr++;
	}
	count = ptr - s;

	return (count);
}



/**
 * _strchr - locates a character in a string
 * @s: is the string parameter
 * @c: is the character to locate
 *
 * Return: return a pointer to s or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}
