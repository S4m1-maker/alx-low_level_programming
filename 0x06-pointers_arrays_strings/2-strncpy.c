#include "main.h"

/**
 * _strncpy - copies n bytes of a string, from one location to another
 * @dest: is the destination pointer parameter
 * @src: is the source pointer parameter
 * @n: is the n bytes parameter to copy
 *
 * Return: returns a pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
