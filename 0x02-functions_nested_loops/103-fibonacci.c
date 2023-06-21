#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0(success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, n, S;

	b = 1;
	c = 2;
	S = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			S = S + b;
		}
		n = b + c;
		b = c;
		c = n;
	}

	printf("%lu\n", S);

	return (0);
}
