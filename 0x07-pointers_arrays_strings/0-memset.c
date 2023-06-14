#include "main.h"

/**
* _memset - fills memory with constant byte
* @s: is the pointer string parameter
* @b: is the constant byte
* @n: n bytes of the memory
*
* Return: returns s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
