#include "main.h"

/**
**_strcpy - copies the string pointed to by src
*
*@dest: destination parameter
*@src: source parameter
*
*Return: returns the dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int a;

	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	for (a = 0 ; a < i ; a++)
	{
		dest[a] = src[a];
	}
	dest[i] = '\0';
	return (dest);
}
