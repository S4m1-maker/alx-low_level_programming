#include <stdio.h>

/**
 * main - prints numbers from 0 to 100, and if replaces multiples of
 * three with the word "Fizz" and multiples of five with the word "Buzz"
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	int i, n = 100;

	for (i = 1 ; i > 0 && i <= n ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
