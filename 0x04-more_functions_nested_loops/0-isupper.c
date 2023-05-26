#include "main.h"

/**
* _isupper - checks for uppercase charater
* @c: is the parameter to be checked
*
* Return: returns 1 when successful else 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
