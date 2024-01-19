#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except for the letters:
 * q and e
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c += 1;
		}
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
