#include "main.h"
#include <stdio.h>

/**
*print_array - prints n elements of an array of integers
*
*@a: is the pointer parameter of the function
*@n: is the number of elements parameter of the function
*
*Return: success when the program executes
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d, ", *(a + i));
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
