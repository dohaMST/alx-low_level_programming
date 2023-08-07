#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t bytes, size = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes = write(fl, text_content, size);

	if (fl == -1 || bytes == -1)
		return (-1);
	close(fl);
	return (1);
}
