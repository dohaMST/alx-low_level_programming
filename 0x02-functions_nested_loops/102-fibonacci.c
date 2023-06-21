#include <stdio.h>
/**
 * main - program will print first 50 Fibonacci numbers
 * Return: 0(success)
 */
int main(void)
{
	int x;
	unsigned long fib1 = 0, fib2 = 1, S;

	for (x = 0; x < 50; x++)
	{
		S = fib1 + fib2;
		printf("%lu", S);

		fib1 = fib2;
		fib2 = S;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
