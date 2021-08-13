#include "main.h"
/**
 * create_file - Creates a file and writes text onto it
 * @filename: name of file to create
 * @text_content: null terminated string to write to file
 * Return: -1 on error, 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int txtlength = 0;
	int printed;

	if (!filename)
		return (-1);

	if(!text_content)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd = -1)
			return (-1);

		close(fd);
		return (1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[txtlength])
	{
		txtlength++;
	}
	printed = write(fd, text_content, txtlength);
	if (printed == -1)
		return (-1);

	close(fd);
	return (1);
}
