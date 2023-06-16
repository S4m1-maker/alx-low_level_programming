#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: is the pointer to string
* @accept: is the second pointer to string subtring to check
*
* Return: returns an insigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == *s)
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (count);
			}
			j++;
		}
		s++;
	}
	return (count);
}
