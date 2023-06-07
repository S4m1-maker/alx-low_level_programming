#include "main.h"
/**
*_strncat - concatenates two strings using n bytes from src
*
*@dest: is the first parameter of the function
*@src: is the second parameter of the function
*@n: is the third parameter of the function
*
*Return: returns dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
