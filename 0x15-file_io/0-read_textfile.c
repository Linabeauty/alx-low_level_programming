#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Read and prints a text file to POSIX
 * @filename: A pointer to the filename
 * @letters: The letters the function should read and print.
 *
 * Return: 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nRd, nWr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nRd = read(fd, buf, letters);
	nWr = write(STDOUT_FILENO, buf, nRd);

	close(fd);

	free(buf);

	return (nWr);
}
