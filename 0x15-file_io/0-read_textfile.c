#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its contents to STDOUT.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read from the file.
 *
 * Return: The actual number of bytes read and printed.
 *         0 if the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t n_bytes, w_bytes;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	n_bytes = read(fd, buf, letters);
	w_bytes = write(STDOUT_FILENO, buf, n_bytes);

	free(buf);
	close(fd);

	return (w_bytes);
}
