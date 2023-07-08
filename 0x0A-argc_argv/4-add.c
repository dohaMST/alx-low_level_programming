#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: size of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int s = 0;
	char *x;

	while (-- argc)
	{
		for (x = argv[argc]; *x; x++)
		{
			if (*x < '0' || *x > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
