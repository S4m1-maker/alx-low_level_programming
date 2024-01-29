#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: is the parameter to check
 *
 * Return: returns 1 if true, or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	return (c);
}
