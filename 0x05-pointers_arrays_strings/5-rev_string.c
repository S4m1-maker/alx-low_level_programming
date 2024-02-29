#include "main.h"

/**
 * rev_string - this function reverses the string
 * @s: is the parameter string to reverse
 *
 * Return: return is void
 */

void rev_string(char *s)
{
	int len, i, j;
	char tc;

	len = _strlen(s);
	j = len - 1;
	for (i = 0 ; i < j ; i++)
	{
		tc = s[i];
		s[i] = s[j];
		s[j] = tc;
		j--;
	}
}




/**
 * _strlen - returns the length of a string
 * @s: is the string parameter to count
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0 ; *s != '\0' ; len++)
	{
		s++;
	}

	return (len);
}
