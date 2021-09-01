#include "main.h"
/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: text to write
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int txtlength = 0;
	int printed;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (!fd)
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
