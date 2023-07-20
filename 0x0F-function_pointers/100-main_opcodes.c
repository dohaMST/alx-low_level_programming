#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: the size of array
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *f;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = (char *)main;
	for (i = 0; i <	bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", f[i]);
			break;
		}
		printf("%02hhx ", f[i]);
	}

	return (0);
}
