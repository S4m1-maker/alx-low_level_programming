#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is the parameter to compute the last number from
 *
 * Return: returns n
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;

	_putchar(n + '0');

	return (n);
}
