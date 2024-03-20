#include "main.h"

/**
 * _strcat - appends a string from one location to another string at
 * a different location
 * @dest: is the pointer to the dest parameter
 * @src: is the pointer to the src parameter
 *
 * Return: returns the pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
