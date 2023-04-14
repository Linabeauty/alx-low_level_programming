#include "main.h"

/**
 * create_file - create a new file
 * @filename: The name of file created
 * @text_content: Textfile to be written inside the file
 *
 * Return: Return 1 if successful, returns 1- if not successful
 */

int create_file(const char *filename, char *text_content)
{
	int rWr;
	int fd;
	int nletters;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0500);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)

		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rWr = write(fd, text_content, nletters);

	if (rWr == -1)
		return (-1);

	close(fd);

	return (1);
}
