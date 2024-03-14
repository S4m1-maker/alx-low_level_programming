#include "main.h"

/**
 * _strcpy - copies a string from one location to another
 * @dest: is the pointer to the destination location
 * @src: is the pointer to the source location
 *
 * Return: returns a pointer to the dest location
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
