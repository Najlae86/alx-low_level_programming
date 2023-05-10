#include "main.h"

/**
 * check97 - checks for the correct number of arg
 * @argc: number of arg
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check98 - checks that file_from exists and can be read
 * @check: checks if it's true or not
 * @name: name of the file
 * @file_from: file description of file_from, or -1
 * @file_to: file description of file_to, or -1
 * Return: void
 */
void check98(ssize_t check, char *name, int file_from, int file_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		if (file_from != -1)
			close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(98);
	}
}
/**
 * check99 - checks that file_to was created and/or can be written to
 * @check: checks if it's true or not
 * @name_to: file_to name
 * @file_from: file_from's description, or -1
 * @file_to: file_to's description, or -1
 * Return: void
 */
void check99(ssize_t check, char *name_to, int file_from, int file_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name_to);
		if (file_from != -1)
			close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(99);
	}
}
/**
 * check100 - checks that file descr were closed properly
 * @c: checks if it's true or not
 * @FD_VALUE: file descr
 * Return: void
 */
void check100(int c, int FD_VALUE)
{
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FD_VALUE);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another one
 * @argv: array of pointers to the arg
 * @argc: number of arg
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int file_from, file_to, close_from, close_to;
	ssize_t lr, lw;
	char buffer[1024];
	mode_t file_p;

	check97(argc);
	file_from = open(argv[1], O_RDONLY);
	check98((ssize_t)file_from, argv[1], -1, -1);
	file_p = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_p);
	check99((ssize_t)file_to, argv[2], file_from, -1);
	lr = 1024;
	while (lr == 1024)
	{
		lr = read(file_from, buffer, 1024);
		check98(lr, argv[1], file_from, file_to);
		lw = write(file_to, buffer, lr);
		if (lr != lw)
			lw = -1;
		check99(lw, argv[2], file_from, file_to);
	}
	close_from = close(file_from);
	close_to = close(file_to);
	check100(close_from, file_from);
	check100(close_to, file_to);
	return (0);
}
