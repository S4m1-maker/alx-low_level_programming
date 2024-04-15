#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: is the pointer to char in memory parameter
 * @n: is the n bytes of the memory to fill
 * @b: is the const byte to be filled
 *
 * Return: returns a poiter to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n--)
	{
		*s++ = b;
	}
	return (c);
}
