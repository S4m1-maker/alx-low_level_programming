#include "main.h"

/**
 * _strncat - appends n bytes of characters from a source location to
 * a destination location
 * @dest: is the destination pointer parameter
 * @src: is the source pointer parameter
 * @n: is the n bytes parameter
 *
 * Return: returns a pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len = _strlen(dest);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}



/**
 * _strlen - returns the length of a string
 * @s: is the string parameter to count
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0 ; *s != '\0' ; len++)
	{
		s++;
	}

	return (len);
}
