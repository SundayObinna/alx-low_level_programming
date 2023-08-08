#include "main.h"

/**
 * not_close - Prints error
 * @fd: File Descriptor
 *
 * Code by 0xOneBeing
 */

void not_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
	exit(100);
}


/**
 * cp - Copies a file
 * @from: File to copy (source)
 * @to: File to copy to (destination)
 */

void cp(char *from, char *to)
{
	int r, f_r, w, f_w;
	char buffer[1024];

	f_r = open(from, O_RDONLY);
	if (f_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	f_w = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	r = read(f_r, buffer, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	while (r != 0)
	{
		w = write(f_w, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", to);
			exit(99);
		}
		r = read(f_r, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			exit(98);
		}
	}
	if (close(f_w) == -1)
		not_close(f_r);
	if (close(f_r) == -1)
		not_close(f_w);
}

/**
 * main - Copies one file into another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: EXIT_SUCCESS - Safe exit.
 *
 * Code by 0xOneBeing
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	cp(argv[1], argv[2]);

	return (EXIT_SUCCESS);
}
