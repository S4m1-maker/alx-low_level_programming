#include "main.h"

/**
 * _isalpha - checks for lowercase or uppercase character
 * @c: is the parameter to check
 *
 * Return: returns 1 if true, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	return (c);
}
