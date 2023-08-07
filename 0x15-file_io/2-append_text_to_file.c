#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, bytes, size;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	fl = open(filename, O_WRONLY | O_APPEND);
	bytes = write(fl, text_content, size);

	if (fl == -1 || bytes == -1)
		return (-1);

	close(fl);

	return (1);
}
