#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: is the parameter to check
 *
 * Return: returns 1 if true, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
