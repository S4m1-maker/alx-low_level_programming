#include "main.h"

/**
* _strlen - returns the length of a string
* @s: is the pointer parameter to the function
*
* Return: returns the size of the string
*/

int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		length++;
	}
	return (length);
}
