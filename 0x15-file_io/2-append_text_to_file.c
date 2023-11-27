#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * append_text_to_file - function appends text at the end of file
 * @filename: name of the file and text_content
 * @text_content: file  content
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int rwr;
	int ltrs;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (ltrs = 0; text_content[ltrs]; ltrs++)
			;

		rwr = write(file, text_content, ltrs);

		if (rwr == -1)
			return (-1);
	}

	close(file);

	return (1);
}
