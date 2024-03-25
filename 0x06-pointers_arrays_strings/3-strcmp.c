#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: is the first string parameter
 * @s2: is the second string parameter
 *
 * Return: returns 0 if the strings are equal, else returns s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; (s1[i] != '\0') && (s2[i] != '\0') ; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
