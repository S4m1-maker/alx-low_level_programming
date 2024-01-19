#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a newline
 *
 * Return: returns 0 when successful
 */

int main(void)
{
		char c;

		c = 'a';
		while (c <= 'z')
		{
				putchar(c);
				c++;
		}
		putchar('\n');

		return (0);
}
