#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*read_textfile -  reads a text file and prints it to the POSIX standard output
*
*@filename: text file being read
*
*@letters: number of letters to be read
*
*Return: w- actual number of bytes read and printed
*   0 when function fails or filename is NULL
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t bytes_written;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);


	free(buffer);
	close(fd);
	return (bytes_written);
}
