#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 * Return: 0
 */

int main(void)
{
	int s;
	char ch;

	srand(time(NULL));
	while (s <= 2645)
	{
		ch = rand() % 128;
		s += ch;
		putchar(ch);
	}
	putchar(2772 - s);
	return (0);
}
