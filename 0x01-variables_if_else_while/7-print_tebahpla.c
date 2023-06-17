#include <stdio.h>
/**
 * main - this program will print the lowercase alphabet in reverse,
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
