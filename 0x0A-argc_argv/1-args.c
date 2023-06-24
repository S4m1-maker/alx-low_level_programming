#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the number of arguments passed into it
* @argc: is the count parameter
* @argv: is the string parameter
*
* Return: returns 0 when successful
*/

int main(int argc, __attribute__ ((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
