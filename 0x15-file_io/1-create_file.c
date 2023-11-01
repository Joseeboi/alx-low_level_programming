#include "main.h"

/**
 * create_file - function to create a file
 *
 * @filename: the name of the file to create
 * @text_content: content writed in this file
 *
 * Return: 1 on success and -1 on failure file cannot
 *		be created
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content != NULL;

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(file_d, text_content, nletters);

	if (rwr == -1)
		return (-1);
	close(file_d);

	return (1);
}
