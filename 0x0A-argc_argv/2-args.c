#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all arguments it receives
* @argc: is a count parameter
* @argv: is a pointer to strings parameter
*
* Return: returns 0 when successful
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
