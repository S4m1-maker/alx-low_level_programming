#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers,
 * comma and space
 *
 * Return: returns 0 when successful
 */

/*
 * declare main function
 * define int var, comma, space
 * while var < 10
 *    print var
 *    if var not equal to 9
 *	      print comma
 *	      print space
 *    var++
 * print new line
 * return
 */

int main(void)
{
	int num, base = 10, comma = 44, space = 32;

	num = 0;
	while (num < base)
	{
		putchar(num + '0');
		if (!(num == 9))
		{
			putchar(comma);
			putchar(space);
		}
		num++;
	}
	putchar('\n');

	return (0);
}
