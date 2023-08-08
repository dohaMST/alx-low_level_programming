#include <stdio.h>
#include <stdlib.h>

void close_file(FILE *fp);

/**
 * close_file - Closes file pointers.
 * @fp: The file pointer to be closed.
 */
void close_file(FILE *fp)
{
	if (fclose(fp) == EOF)
	{
		fprintf(stderr, "Error: Can't close file\n");
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	FILE *from, *to;
	char buffer[1024];
	size_t r, w;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = fopen(argv[1], "r");
	if (from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = fopen(argv[2], "w");
	if (to == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		close_file(from);
		exit(99);
	}

	while ((r = fread(buffer, 1, sizeof(buffer), from)) > 0)
	{
		w = fwrite(buffer, 1, r, to);
		if (w != r)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			close_file(from);
			close_file(to);
			exit(99);
		}
	}

	close_file(from);
	close_file(to);

	return (0);
}

