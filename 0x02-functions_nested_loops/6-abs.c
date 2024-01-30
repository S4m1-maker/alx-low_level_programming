#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: is the parameter to print
 *
 * Return: returns n
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
