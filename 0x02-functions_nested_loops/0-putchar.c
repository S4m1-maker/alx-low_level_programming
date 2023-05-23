#include "main.h"

/**
* main - prints out the characters _putchar
* @c: the parametr of the function
*
* Return: returns 0 when successful
*/

int print_char(char c);

int main(void)
{
	char c = 0;

	print_char(c);
	_putchar('\n');
	return (0);
}




/**
* print_char - writes the cahracter c to stdout
* @c: the parametr of the function
*
* Return: returns the parameter c when successful
*/

int print_char(char c)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	return (c);
}
