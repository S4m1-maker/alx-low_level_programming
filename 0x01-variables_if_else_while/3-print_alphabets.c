#include <stdio.h>

/**
*main - prints the alphabet in lowercase and then in uppercase
*
*Return: returns 0 when successful
*/

int main(void)
{
	char a = 'a';
	char c = 'A';

	while (a <= 'z')
	{
		putchar(a++);
	}

	while (c <= 'Z')
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
