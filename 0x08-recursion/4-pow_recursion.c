#include "main.h"

/**
* _pow_recursion - returns a value of a number to the power of a number
* @x: is the base parameter
* @y: is the power parameter
*
* Return: return the resultion of the calc
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
