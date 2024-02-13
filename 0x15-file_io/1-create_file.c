#include <fcntl.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function name that creates a file
 * @filename: this is the name of the file to create
 * @text_content: this is a null terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC,  0600);

	if (fd == -1)
	return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	rwr = write(fd, text_content, num_letters);

	if (rwr == -1)
	{
		return (-1);
	}



	close(fd);

	return (1);

}
