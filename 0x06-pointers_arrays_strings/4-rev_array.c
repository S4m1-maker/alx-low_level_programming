#include "main.h"

/**
* reverse_array - reverses the contents of an array
* @a: is the array parameter
* @n: is the number of elements of the array
*
* Return: success when the program excutes
*/

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0 ; i < n-- ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
