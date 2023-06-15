#include "main.h"

/**
* _memcpy - copies a memory area
* @dest: is the pointer to copy into
* @src: is the pointer to copy from
* @n: is the n bytes of memory to copy
*
* Return: returns dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	j = n;
	for (i = 0 ; i < j ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
