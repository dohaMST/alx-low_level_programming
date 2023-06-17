#include <stdio.h>
/**
 * main - program will print possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
