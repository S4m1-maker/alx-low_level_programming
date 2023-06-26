#include <stdio.h>
#include <stdlib.h>

/**
* main - adds poaitive numbers
* @argc: is the count paramter
* @argv: is the pointer to string parameter
*
* Return: returns 0 when successful
*/

int main(int argc, char *argv[])
{
	int i = 0;
	int add = 0;
	int j;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
