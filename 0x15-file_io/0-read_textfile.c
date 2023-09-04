#include "main.h"
/**
 * read_textfile - Reads the text file.
 * @filename: File name.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters to print and read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	count = read(fd, buf, letters);
	if (count == -1)
	{
		free(buf);
		return (0);
	}

	if ((write(STDOUT_FILENO, buf, count) == -1))
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (count);
}
