#include <stdio.h>

/**
*main - prints all numbers of base 10
*
*Return: returns 0 when successful
*/

int main(void)
{
	int i;

	while (i < 10)
	{
		printf("%d", i++);
	}
	putchar('\n');
	return (0);
}
