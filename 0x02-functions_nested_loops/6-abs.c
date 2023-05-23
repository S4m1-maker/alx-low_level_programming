#include "main.h"

/**
* _abs - calculates the absolute value of a number
* @i: is the parameter of the function
*
* Return: returns 0 when successful
*/

int _abs(int i)
{
	if (i < 0)
	{
		i = -1 * i;
	}
	return (i);
}
