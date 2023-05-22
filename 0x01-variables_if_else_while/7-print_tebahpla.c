#include <stdio.h>

/**
*main - prints the lowercase alphabet in reverse
*
*Return: returns 0 when successful
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
