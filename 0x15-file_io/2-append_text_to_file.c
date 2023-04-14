#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The filename appends
 * @text_content: Content added to the file
 *
 * Return: 1 if the file exist. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int nletters;
	int fp;
	int rWr;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rWr = write(fp, text_content, nletters);

		if (rWr == -1)
			return (-1);
	}

	close(fp);

	return (1);
}
