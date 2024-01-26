#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function that generates and prints passwords for the crackme5
 * @argc: length of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char psw[7], *x;
	int size = strlen(argv[1]), i, tmp;

	x = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	tmp = (size ^ 59) & 63;
	psw[0] = x[tmp];
	tmp = 0;
	for (i = 0; i < size; i++)
		tmp += argv[1][i];
	psw[1] = x[(tmp ^ 79) & 63];
	tmp = 1;
	for (i = 0; i < size; i++)
		tmp *= argv[1][i];
	psw[2] = x[(tmp ^ 85) & 63];
	tmp = 0;
	for (i = 0; i < size; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	psw[3] = x[rand() & 63];
	tmp = 0;
	for (i = 0; i < size; i++)
		tmp += (argv[1][i] * argv[1][i]);
	psw[4] = x[(tmp ^ 239) & 63];
	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	psw[5] = x[(tmp ^ 229) & 63];
	psw[6] = '\0';
	printf("%s", psw);
	return (0);
}
