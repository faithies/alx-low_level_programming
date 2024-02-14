#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: a NULL terminating string to add at the end of the file
 * Return: 1 0n success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int rwr;
	int num_content;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num_content = 0; text_content[num_content]; num_content++)
			;


		rwr = write(fd, text_content, num_content);

		if (rwr == -1)
			return (-1);

	}

	close(fd);


	return (1);
}
