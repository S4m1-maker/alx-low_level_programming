#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: is the array parameter to print
 * @n: is the number of elements parameter to print
 *
 * Return: return is void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		else
			printf("%d, ", *(a + i));
	}
	putchar('\n');
}
