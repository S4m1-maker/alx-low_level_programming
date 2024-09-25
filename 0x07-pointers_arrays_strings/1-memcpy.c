#include "main.h"

/**
 * _memcpy - copies an area of memory
 * @dest: is the destination memory to copy to
 * @src: is the source memory to copy from
 * @n: is the n bytes of memory to copy
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		*dest++ = src[i];

	return (pdest);
}
