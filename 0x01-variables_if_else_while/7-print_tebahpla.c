#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, in reverse
 *
 * Return: returns 0 when successful
 */

/*
 * declare main function
 * define char var
 * while var >= 'a'
 * print var
 * var--
 * return
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
