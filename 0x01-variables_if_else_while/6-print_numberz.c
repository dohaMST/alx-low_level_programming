#include <stdio.h>

/**
 * main - this program will print numbers from 0 to 9.
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
