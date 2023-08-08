#include "main.h"

/**
* read_textfile - Reads a text file
* @filename: The name of the text file
* @letters: The length (size) of the text file
* Return: The actual number of letters or (EXIT_SUCCESS).
*
* Code by 0xOneBeing
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;		/* Text file */
	int l;		/* Number of letters */
	char *b;	/* Buffer */

	l = 0;

	if (!filename)
		return (EXIT_SUCCESS);

	b = malloc((letters + 1) * sizeof(char));

	if (b == NULL)
		return (EXIT_SUCCESS);

	b[l] = '\0';
	f = open(filename, O_RDONLY);

	if (f == -1)
		return (EXIT_SUCCESS);

	l =  read(f, b, letters);
	write(STDOUT_FILENO, b, l);
	close(f);
	free(b);

	return (l);
}
