#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends a given string to the end of a file
 * @filename: The name of the file to append to
 * @text_content: A NULL-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret_val, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		ret_val = write(fd, text_content, i);
		if (ret_val == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
