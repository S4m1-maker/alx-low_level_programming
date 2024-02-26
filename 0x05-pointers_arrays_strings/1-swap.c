#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is the first parameter
 * @b: is the second parameter
 *
 * Return: return is void
 */

void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
