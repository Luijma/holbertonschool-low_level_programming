#include "main.h"
/**
 * read_textfile - reads the content of a text file and prints it
 * @filename: name of the file
 * @letters: amount of letters to read and print
 * Return: number of letters succesfully read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int printed;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);


	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	printed = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, printed);

	free(buffer);
	close(fd);
	return (printed);
}
