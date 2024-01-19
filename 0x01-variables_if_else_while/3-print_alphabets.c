#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then in uppercase, followed
 * by a new line
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	char c, b;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	b = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
