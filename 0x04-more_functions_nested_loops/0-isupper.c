#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is the parameter to check
 *
 * Return: returns 1 if true, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
