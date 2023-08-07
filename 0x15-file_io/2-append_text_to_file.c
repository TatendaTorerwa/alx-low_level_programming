#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
*append_text_to_file - Appends text at the of a file
*
*@filename: A pointer to the name of the file
*
*@text_content: The string to add to the end of the file
*
*Return: If the file does not exist the user lacks write permissions - -1.
*	Otherwise - 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, bytes_written, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(o, text_content, length);

	if (o == -1 || bytes_written == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}

