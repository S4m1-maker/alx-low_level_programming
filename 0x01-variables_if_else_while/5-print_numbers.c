#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10, starting from 0
 *
 * Return: returns 0 when successful
 */

/*
* declare main function
* define variable of type int
* while variable is less than 10
* print the variable
* increament variable by 1
* return
*/
int main(void)
{
	int num, base = 10;

	num = 0;
	while (num < base)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
