#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * read_textfile - function name that reads a text file and prints
 * it to the POSIX stdout
 * @filename: represent the name of the file for reading
 * @letters: number of letters it should print
 * Return: the actual number of letters
 */

size_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int  fd;
	ssize_t length_r, length_w;


	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	length_r = read(fd, buffer, letters);
	close(fd);
	if (length_r == -1)
	{
		free(buffer);
		return (0);
	}
	length_w = write(STDOUT_FILENO, buffer, length_r);
	free(buffer);
	if (length_r != length_w)
		return (0);
	return (length_w);
}
