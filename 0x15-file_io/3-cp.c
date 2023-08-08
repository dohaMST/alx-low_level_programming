#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *c_buf(char *fileX);
void c_file(int fileX);

/**
 * c_buf - a function that creates a new buffer.
 * @fileX: the name of file
 * Return: A pointer to the newly-allocated buffer.
 */
char *c_buf(char *fileX)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fileX);
		exit(99);
	}

	return (buf);
}

/**
 * c_file - a function that close a file
 * @fileX: The name of the file
 */
void c_file(int fileX)
{
	int x;

	x = close(fileX);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileX);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The size of array of arguments
 * @argv: An array of arguments.
 * Return: 0
 * Description: If the argument count is incorrect - exit code 97.
 * If file_f1 does not exist or cannot be read - exit code 98.
 * If file_f2 cannot be created or written to - exit code 99.
 * If file_f2 or file_f1 cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, lire, ecrire;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = c_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	lire = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || lire == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		ecrire = write(to, buf, lire);
		if (to == -1 || ecrire == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		lire = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (lire > 0);

	free(buf);
	c_file(from);
	c_file(to);
	return (0);
}
