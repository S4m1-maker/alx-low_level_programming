#include "main.h"

/**
* _islower - checks for lowercase character
* @c: is the parameter to be checked
*
* Return: returns 1 if true, else retruns 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
