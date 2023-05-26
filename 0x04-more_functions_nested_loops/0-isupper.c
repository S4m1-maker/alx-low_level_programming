#include "main.h"

/**
* _isupper - checks for uppercase charater
* @c: is the parameter to be checked
*
* Return: returns c when successful
*/

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (c);
}
