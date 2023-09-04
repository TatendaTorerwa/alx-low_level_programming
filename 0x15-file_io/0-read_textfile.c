#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and print to STDOUT.
 *
 * @filename: Text file being read.
 *
 * @letters: Number of letters to be read.
 *
 * Return: Number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fd;
ssize_t p;
ssize_t m;

if (filename == NULL)
{
return (0);
}

fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}
m = read(fd, buffer, letters);
p = write(STDOUT_FILENO, buffer, m);

free(buffer);
close(fd);
return (p);

}
