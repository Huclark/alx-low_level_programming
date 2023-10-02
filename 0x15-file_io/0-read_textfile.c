#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of file to be read
 * @letters: Number of letters to be read and printed from file
 * Return: Number of letters read and printed from file
 *         Or 0 if file can not be opened or read
 *         Or 0 if filename is NULL
 *         Or 0 if write fails or does not write the expected number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_ptr = NULL;
	char *buff;
	size_t br; /* bytes read in file */
	size_t bw; /* bytes written to standard output */

	if (filename == NULL)
		return (0);

	file_ptr = fopen(filename, "r");

	if (file_ptr == NULL)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));

	if (buff == NULL)
	{
		fclose(file_ptr);
		return (0);
	}

	br = fread(buff, sizeof(char), letters, file_ptr);

	if (br < 0)
	{
		free(buff);
		fclose(file_ptr);
		return (0);
	}

	buff[br] = '\0';

	bw = write(STDOUT_FILENO, buff, br);

	if (bw < 0 || bw != br)
	{
		free(buff);
		fclose(file_ptr);
		return (0);
	}

	free(buff);
	fclose(file_ptr);
	return (br);
}