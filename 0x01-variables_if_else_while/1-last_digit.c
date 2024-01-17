#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints the last digit of a number stored in n
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = (n % 10);
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	if (ld == 0)
		printf("Last digit of %d is %d and is zero\n", n, ld);
	if (ld < 6 && ld != 0)
		printf("Last digit of %d is %d and is less tha 6 and not 0\n", n, ld);

	return (0);
}
