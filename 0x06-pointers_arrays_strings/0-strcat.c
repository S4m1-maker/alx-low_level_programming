#include "main.h"

/**
*_strcat - concatenates two strings
*
*@dest: is the destination parameter
*@src: is the sorce parameter
*
*Return: returns destination
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}

	dest[i] = '\0';
	return (dest);
}
