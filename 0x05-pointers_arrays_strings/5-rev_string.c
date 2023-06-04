#include "main.h"

/**
* rev_string - reverses a string
* @s: is the pointer parameter
*
* Retrun: success when the program executes
*/

void rev_string(char *s)
{ 
	int i;
	int count = 0;
	char str = s[0];

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0 ; i < count ; i++)
	{
		count--;
		str = s[i];
		s[i] = s[count];
		s[count] = str;
	}

		
}
