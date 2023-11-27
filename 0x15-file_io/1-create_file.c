#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create and text_content
 * @text_content: file content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int ltrs;
	int rwr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (ltrs = 0; text_content[ltrs]; ltrs++)
		;

	rwr = write(file, text_content, ltrs);

	if (rwr == -1)
		return (-1);
	close(file);

	return (1);
}

