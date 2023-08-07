#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: the name of file
 * @letters: number of letters
 * Return: returns the number of bytes we read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *buffer;
	ssize_t w;

	if (!filename || !letters)
		return (0);
	fl = open(filename, O_READONLY);
	if (fl == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	w = read(fl, buffer, letters);
	w = write(STDOUT_FILENO, buffer, w);
	close(fl);
	return (w);
}
