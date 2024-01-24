#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 *
 * Return: returns 0 when successful
 */

/*
 * declare main fucntion
 * define int variables, var1, var2, b1, b2
 * while var1 <= b1
 * putchar var1
 * var1++
 * while var2 <= b2
 * putchar var2
 * var2++
 * putchar new line
 * return
 */

int main(void)
{
	int num1, num2, b1 = 57, b2 = 102;

	num1 = 48;
	while (num1 <= b1)
	{
		putchar(num1);
		num1++;
	}

	num2 = 97;
	while (num2 <= b2)
	{
		putchar(num2);
		num2++;
	}
	putchar('\n');

	return (0);
}
