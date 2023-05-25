#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @i: is the parameter to print
*
* Return: returns n when successful
*/

int print_last_digit(int i)
{
	int n = 0;

	if (n >= 0)
	{
		n = _abs(i) % 10;
		_putchar(n + '0');
	}
	else if (n < 0)
	{
		n = -(i % 10);
		_putchar(n + '0');
	}
	return (n);
}




/**
* _abs - calculates the absolute value of a number
* @i: is the parameter to print
*
* Return: returns i when successful
*/

int _abs(int i)
{
	if (i < 0)
	{
		i = -1 * i;
	}
	return (i);
}
