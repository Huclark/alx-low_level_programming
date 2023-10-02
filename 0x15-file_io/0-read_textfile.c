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
	ssize_t file_des; /* File descriptor */
	char *buff; /* bufffer to hold string */
	ssize_t br; /* bytes read in file */
	ssize_t bw; /* bytes written to standard output */

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	br = read(file_des, buff, letters);
	bw = write(STDOUT_FILENO, buff, br);

	free(buff);
	close(file_des);
	return (bw);
}
