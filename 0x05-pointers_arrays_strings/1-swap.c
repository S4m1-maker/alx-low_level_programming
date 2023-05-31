#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: is the first pointer parameter
* @b: is the second pointer parameter
*
* Return: success when the program executes
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
