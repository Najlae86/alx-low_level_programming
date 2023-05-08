#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file print to STDOUT
 * @filename: text file to read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename in NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	buffer = malloc(sizeof(char) * letters);
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(o);
	return (w);
}
