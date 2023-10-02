#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 *         If the function fails or filename is NULL -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, bw;
	int idx = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (idx = 0; text_content[idx];)
			idx++;
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);
	bw = write(file_desc, text_content, idx);

	if (file_desc == -1 || bw == -1)
		return (-1);

	close(file_desc);

	return (1);
}
