#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * read_textfile - function reads text file
 * prints it to POSIX standard output
 * @letters:  number of letters it should read and print
 * @filename: file to read
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file);
		return (0);
	}
	r = read(file, buf, letters);
	close(file);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	free(buf);
	if (r != w)
		return (0);
	return (w);
}
