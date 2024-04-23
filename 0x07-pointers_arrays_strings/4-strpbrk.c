#include "main.h"

/**
 * _strpbrk - locates the first occurrence of a set of bytes in a string
 * @s: is the string parameter to search
 * @accept: is the set of bytes to compare with s
 *
 * Return: returns a pointer to the byte in s that matches on of the
 * bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *pts;

	if (s == NULL && accept == NULL)
		return (NULL);
	while (*s != '\0')
	{
		pts = accept;
		while (*pts != '\0')
		{
			if (*s == *pts)
				return (s);
			pts++;
		}
		s++;
	}
	return (NULL);
}
