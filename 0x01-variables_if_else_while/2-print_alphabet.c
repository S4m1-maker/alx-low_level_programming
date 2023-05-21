#include <stdio.h>

/**
*main - prints the alphabet in lowercase
*
*Return: returns 0 when successful
*/

int main(void)
{
	char  c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
