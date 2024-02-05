#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from any number to 98
 * @n: is the parameter to print
 *
 * Return: return is void
 */

void print_to_98(int n)
{
	int tar = 98;

	if (n < tar)
	{
		while (n <= tar)
		{
			if (n == tar)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			printf("%d, ", n);
			n++;
		}
	}
	else if (n == tar)
	{
		printf("%d", n);
		printf("\n");
	}
	else
	{
		while (n >= tar)
		{
			if (n == tar)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			printf("%d, ", n);
			n--;
		}
	}

}
