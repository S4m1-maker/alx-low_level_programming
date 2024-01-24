#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: returns 0 when successful
 */

/*
 * declare main funcntion
 * define int var, varb
 * while var is less ascii value:57
 * putchar var
 * var++
 * putchar newline
 * return
 */

int main(void)
{
	int num, base = 58;

	num = 48;
	while (num < base)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
