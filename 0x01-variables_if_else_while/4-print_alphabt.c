#include <stdio.h>

/**
*main - prints the alphabet in lowercase, except for q and e
*
*Return: returns 0 when successful
*/

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a = a + 1;
		}
		putchar(a++);
	}
	putchar('\n');
	return (0);
}

