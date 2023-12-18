#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: the string to write to the file.
 *
 * Return: If the function fails -1 Otherwise  1.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, bytes, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes = write(fp, text_content, len);

	if (fp == -1 || bytes == -1)
		return (-1);

	close(fp);

	return (1);
}

