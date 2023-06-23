#include <stdio.h>

/**
* main - prints the name of this program
* @argc: is the count parameter
* @argv: is the string parameter
*
* Return: returns 0 when successful
*/

int main(int argc, char* argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
