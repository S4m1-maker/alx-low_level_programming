#include "main.h"

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
