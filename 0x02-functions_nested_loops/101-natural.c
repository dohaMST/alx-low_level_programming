#include <stdio.h>
/**
 * main - program will list all the natural numbers below 1024(excluded)
 * Return: 0(success)
 */
int main(void)
{
	int i, S = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			S += i;
	}

	printf("%d\n", S);

	return (0);
}
