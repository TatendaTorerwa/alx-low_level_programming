#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 *
 * @text_content: A string to add to the end of file.
 *
 *Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int written, p, length = 0;

if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[length] != '\0')
{
length++;
}
}

p = open(filename, O_WRONLY | O_APPEND);
written = write(p, text_content, length);

if (p == -1 || written == -1)
{
return (-1);
}
close(p);
return (1);
}
