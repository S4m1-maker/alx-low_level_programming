#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: is the array parameter
 * @n: is the number of elements parameter
 *
 * Return: return is void
 */

void reverse_array(int *a, int n)
{
	int temp, start = 0, end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
