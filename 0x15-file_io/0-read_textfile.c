#include "main.h"
#include <stdlib.h>

/**
i * read_textfile- Read text file to print Standard Output
 * @filename: reading text file
 * @letters: number of letters to be read
 * Return: w- actual n0. of bytes, also print 0 when func fails or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
