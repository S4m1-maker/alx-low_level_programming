#include "main.h"

/**
*_strncpy - copies a string
*
*@dest: is the parameter to copy into
*@src: is the parameter to copy
*@n: is the n number of characters to copy
*
*Return: returns dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
