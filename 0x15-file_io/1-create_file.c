#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, bw, idx = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (idx = 0; text_content[idx];)
			idx++;
	}

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bw = write(file_desc, text_content, idx);

	if (file_desc == -1 || bw == -1)
		return (-1);

	close(file_desc);

	return (1);
}

