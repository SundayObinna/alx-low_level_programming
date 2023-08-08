#include "main.h"
/**
* create_file - Creates a text file
* @filename: The name of the text file
* @text_content: The content of the text file
* Return: 1 or -1
*
* Code by 0xOneBeing
*/

int create_file(const char *filename, char *text_content)
{
	int f;	/* The text file */
	int i;

	i = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i])
		i++;

	write(f, text_content, i);
	close(f);

	return (1);
}
