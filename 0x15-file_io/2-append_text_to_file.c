#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: file name
 * @text_content: NULL terminated string to add
 * Return: 1 on success, -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, i = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	w = write(o, text_content, i);
	close(o);
	if (w == -1)
		return (-1);
	return (1);
}
