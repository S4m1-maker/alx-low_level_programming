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

	for (i = 1 ; i <= n ; i++)
	{
		int mult3 = i % 3 == 0, mult5 = i % 5 == 0;

		if (mult3 && mult5)
			printf("FizzBuzz ");
		else if (mult3)
			printf("Fizz ");
		else if (mult5)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
