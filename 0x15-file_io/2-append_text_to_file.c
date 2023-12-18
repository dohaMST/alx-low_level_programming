#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 *	If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, bytes, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	bytes = write(fp, text_content, len);

	if (fp == -1 || bytes == -1)
		return (-1);

	close(fp);

	return (1);
}

