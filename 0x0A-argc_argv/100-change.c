#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, num = 0;
		int m = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cents[i])
			{
				num += m / cents[i];
				m = m % cents[i];
				if (m % cents[i] == 0)
					break;
			}
		}
		printf("%d\n", num);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
