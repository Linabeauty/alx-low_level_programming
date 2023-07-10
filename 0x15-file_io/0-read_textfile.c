#include "main.h"
/**
 * read_textfile - read a text file and print out the letters
 * @filename: Name of text file
 * @letters: number of the letters printed
 *
 * Return: number of letters printed. If it fails, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nrd, nwr;
	char *buf;
	int fd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
