#include "main.h"

/**
* _isdigit - checks for a digit
* @c: is the parameter to be checked
*
* Return: returns 1 when successful, else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
		return (0);
}
